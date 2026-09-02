def valide(ch):
    i=0
    test=True
    while i<len(ch) and test:
        if "a"<=ch[i]<"z":
            i=i+1
        else:
            test=False
    return test and len(ch)>2
def VerifTriee(ch):
    i=0
    while i<len(ch)-1 and ch[i]<ch[i+1]:
        i=i+1
    return i==len(ch)-1
def fusionner(ch1,ch2):
    while ch1!="":
        c=ch1[0]
        ch1=ch1[1:]
        p=ch2.find(c)
        if p==-1:
            i=0
            while ch2.find(c)==-1:
                i=i+1
                if ch2[i]<c<ch2[i+1]:
                    ch2=ch2[:i+1]+c+ch2[i+1:]
    return ch2          
def Play():
    ch1 = input("Saisir ch1 : ")
    ch2 = input("Saisir ch2 : ")
    if not (valide(ch1)) or not (valide(ch2)):
        msg = "Veuillez introduire une chaîne valide!!"
    elif not VerifTriee(ch1):
        msg = "ch1 est non ordonnée"
    elif not VerifTriee(ch2):
        msg = "ch2 est non ordonnée"
    else:
        msg = fusionner(ch1, ch2)
    print(msg)


























