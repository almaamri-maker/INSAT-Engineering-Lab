from numpy import array
def ind(t,n,a):
    i=0
    while i<n and t[i]!=a:
        i=i+1
    return i
def occ(t,n,a):
    s=0
    for i in range(n):
        if t[i]==a:
            s=s+1
    return s
def rep(t,n,k):
    i=0
    while i<n and occ(t,n,t[i])!=k:
        i=i+1
    if i>=n:
        return 0
    else:
        return t[i]

def aff(t,n,k):
    res=rep(t,n,k)
    if res==0:
        print("Pas de kième petit élément")
    else:
        print("le KPPE EST",res,"er l'indice de sa première apparition est",ind(t,n,res))

