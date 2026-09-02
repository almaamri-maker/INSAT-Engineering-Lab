def convert(x):
    res=0
    match x :
        case "M" : res=1000
        case "D" : res=500
        case "C" : res=100
        case "L" : res=50
        case "X" : res=10
        case "V" : res=5
        case "I" : res=1
    return res
    
def verf(a,b):
    return convert(a)<convert(b)
    
def somme(ch):
    s=0
    for i in range(len(ch)-1):
        if verf(ch[i],ch[i+1]):
            x=convert(ch[i])*(-1)
        else: x=convert(ch[i])
        s=s+x
    return s+convert(ch[len(ch)-1])
    
ch = input("Saisir un nombre romain : ")
while ch == "":
    ch = input("Saisir un nombre romain : ")
print("Valeur décimale :", somme(ch))
