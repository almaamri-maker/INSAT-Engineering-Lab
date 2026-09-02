from numpy import array
def majus(x):
    i=0
    while i<len(x) and"A"<=x[i]<="Z":
        i=i+1
    return i==len(x)
        
def verf(n,nom):
    for i in range (n):
        nom[i]=input("Donner le nom du produit n°"+str(i+1)+":")
        while not (len(nom[i])==10 and majus(nom[i])):
            nom[i]=input("Donner le nom du produit n°"+str(i+1)+":")
    
def permu(x):
    if len(x) == 0:
        return x
    return x[-1] + x[:-1]
    
def spirale(nom,n):
    p=int(input("p="))
    while not 0<=p<=9:
        p=int(input("p="))
    ch=""
    for i in range(n):
        ch=ch+nom[i][p]
    TP=array([str]*20)
    TP[0]=ch
    for i in range(1,n):
        TP[i]=permu(TP[i-1])
    for i in range(n):
        print(TP[i])
        
        
#pp
nom=array([str]*20)
n=int(input("donner le nombre du produit"))
while not 3<=n<=20:
    n=int(input("donner le nombre du produit"))
verf(n,nom)
spirale(nom,n)
