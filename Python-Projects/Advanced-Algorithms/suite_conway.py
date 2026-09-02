def occ(i,c,x):
    occ=0
    while i<len(x) and c==x[i]:
        occ=occ+1
        i=i+1
    return occ
    
def terme(x):
    i=0
    t=""
    while i<len(x):
        t=t+str(occ(i,x[i],x))+x[i]
        i=i+occ(i,x[i],x)
    return t


def Play():
    X0=input("X0= ")
    N=input("N=")
    if not (X0.isdecimal() and 0<=int(X0)<=9):
        print("X0 doit être un entier compris entre 0 et 9\n")
    elif not (N.isdecimal() and 2<=int(N)<=13):
        print("N doit être un entier compris entre 2 et 12\n")
    else:
        t=X0
        c="X0"+"="+t+"\n"
        for i in range(1,int(N)+1):
            t=terme(t)
            c=c+"X"+str(i)+"="+t+"\n"
        print(c)
        

