mystr = input("Enter A String : ")

mylst = mystr.split()

newstr = sorted(mylst,key=len)

new_fil = " ".join(newstr)

print(new_fil)