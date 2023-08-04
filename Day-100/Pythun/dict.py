def is_prime(num):
    for i in range(2,num):
        if num%i==0 :
            return False
    return True


dictonary = {}
count = 0

for i in range(2,102):
    if is_prime(i):
        dictonary[i] = "Prime"
        count+=1
    else:
        dictonary[i] = "Not Prime"
        
print(dictonary)