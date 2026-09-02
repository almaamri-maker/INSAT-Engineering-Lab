

def Horner(Z):
    M=0
    while Z!="":
        CH=Z[0]
        M=(M*2+int(CH))%7
        Z=Z[1:len(Z)]
    return M

def Etape1(X):
    Y=""
    for i in range(len(X)):
        Y=Y+str(int(X[i])%7)
    return Y

def Etape2(y):
    if len(y)%2!=0:
        y="0"+y
    z=""
    for i in range(0,len(y)-1,2):
        z=z+str(int(y[i:i+2])%7)
    return z
      
def Play():
    X=input("Saisir un nombre (5 à 20 chiffres) : ")
    if not (5<=len(X)<=20):
        print("Veuillez saisir un nombre de 5 à 20 chiffres")
    elif Horner(Etape2(Etape1(X)))==0:
        print(X+" est divisible par 7")
    else:
        print(X+" n'est pas divisible par 7")

