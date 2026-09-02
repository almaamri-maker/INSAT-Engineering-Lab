from numpy import array

def saisir():
    n=int(input("n="))
    while not n>=10:
        n=int(input("n="))
    return n
    
def remp(i,n):
    global t
    for j in range(i+1,n):
        if j%i==0:
            t[j]=False
            
def crible(n):
    t=array([True]*n)
    t[0],t[1]=False,False
    i=0
    while i<n:
        if t[i]==True:
            remp(i,n)
            i=i+1
        else:
            i=i+1
    return t
    
def generer(n):
    t=crible(n)
    global tp,k
    tp=array([int]*n)
    k=0
    for i in range(n):
        if t[i]==True:
            tp[k]=i
            k=k+1
    return tp,k
def aff(tp,k):
    for i in range(k):
        print(tp[i],end=" ")
    
    
n=saisir()
tp,k=generer(n)
aff(tp,k)
    
        
