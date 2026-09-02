from numpy import array

def verf(x):
    i=0
    while i<len(x) and ("A"<=x[i]<="Z" or x[i]==" "):
        i=i+1
    return i==len(x)
    
def saisir():
    m=input("donner un mot")
    while not (verf(m) and (len(m)%2==0)):
        m=input("donner un mot")
    return m;
    
def decoup(m,t):
    j=0
    for i in range((len(m)//2)):
        t[i]=m[j:j+2]
        j=j+2         
def crypt(m,t):
    for i in range((len(m)//2)):
        if "A"<=t[i][0]<="Z":
            x1=ord(t[i][0])-65
        else: x1=26
        if "A"<=t[i][1]<="Z":
            x2=ord(t[i][1])-65
        else: x2=26
        y1=(11*x1+3*x2)%27
        y2=(7*x1+4*x2)%27
        t[i]="("+str(y1)+","+str(y2)+")"
        if y1==26:
           t[i]=" "+chr(y2+65)
        elif y2==26:
            t[i]=chr(y1+65)+" "
        else: t[i]=chr(y1+65)+chr(y2+65)   
#pp
m=saisir()
t=array([str]*len(m))
decoup(m,t)
crypt(m,t)
v=""
for i in range((len(m)//2)):
    v=v+t[i]
print("message chiffré : ",v)
