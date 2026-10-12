import struct,sys
TYPES={0:'Box',1:'AnimBox',2:'MoveToBox',3:'ChoiceBox',4:'SettingsBox',5:'CObject',6:'Character',7:'CamBox',8:'CCamera',9:'CSettingsBox2'}
def parse(path,verbose=True):
    d=open(path,'rb').read()
    h=struct.unpack_from('<11i',d,0)
    b=d[0x2c:0x38]
    A,B,strc,chn=b[0],b[1],b[2],b[3]
    u30,u32=struct.unpack_from('<HH',d,0x30)
    c34,flags,c36,c37=d[0x34],d[0x35],d[0x36],d[0x37]
    last=struct.unpack_from('<i',d,0x38)[0]
    p=0x3c
    arr=[struct.unpack_from('<i',d,p+4*i)[0] for i in range(c37)]; p+=4*c37
    p+=(A+B)*4
    sb=p; sbsize=h[2]
    offs=[struct.unpack_from('<i',d,sb+4*i)[0] for i in range(strc)]
    strs=[]
    for o in offs:
        e=d.index(b'\0',sb+o); strs.append(d[sb+o:e].decode('latin1'))
    p=sb+sbsize
    ents=[]
    for i in range(c34):
        s,x,y,z=struct.unpack_from('<iBBH',d,p); p+=8; ents.append((strs[s] if 0<=s<len(strs) else s,x,y,z))
    chans=[]
    for i in range(chn):
        cnt=struct.unpack_from('<i',d,p)[0]; p+=4
        lst=list(struct.unpack_from('<%di'%cnt,d,p)) if cnt else []; p+=4*cnt; chans.append(lst)
    if flags&2:
        ex=list(struct.unpack_from('<%di'%chn,d,p)); p+=4*chn
    else: ex=None
    nobj=u32+c36
    objs=[]
    for i in range(nobj):
        t,sz=struct.unpack_from('<ii',d,p)
        objs.append((t,sz,p)); p+=sz
    if verbose and '--graph' in sys.argv:
        import struct as st
        print(path,'strings',strs)
        for t,sz,q in objs:
            w=[st.unpack_from('<i',d,q+j)[0] for j in range(0,sz,4)]
            f=lambda i: st.unpack_from('<f',d,q+4*i)[0]
            nm=TYPES.get(t,t); extra=''
            if t==1: extra=' anm=%s' % (strs[w[15]] if 0<=w[15]<len(strs) else w[15])
            if t==6: extra=' startBox=%d' % w[5]
            if t==7: extra=' camPos=(%.2f,%.2f,%.2f) target=(%.2f,%.2f,%.2f) fov=%.3f' % (f(16),f(17),f(18),f(19),f(20),f(21),f(22))
            if t==2: extra=' walkAnm=%s' % (strs[w[28]] if 0<=w[28]<len(strs) else w[28])
            if t==0: extra=' next=%d' % w[15]
            print('  %-18s id=%-3d pos=(%.3f,%.3f,%.3f,%.3f)%s trailer=%s' % (nm,w[2],f(4),f(5),f(6),f(7),extra,w[18:]))
        verbose=False
    if verbose:
        print(path,len(d),'hdr',h,'A,B,strc,chn',A,B,strc,chn,'u30,u32',u30,u32,'c34 flags c36 c37',c34,flags,c36,c37,'last',last)
        print(' strings',strs); print(' ents',ents); print(' chans',chans,'ex',ex)
        for t,sz,q in objs: print('  obj',TYPES.get(t,t),'size',hex(sz),'@',hex(q))
        print(' end',hex(p),'file',hex(len(d)))
    return d,p
if __name__=='__main__':
    for f in [a for a in sys.argv[1:] if not a.startswith('--')]: parse(f)
