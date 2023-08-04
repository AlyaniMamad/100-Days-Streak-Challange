# Write a Python code to create a list of first 100 positive odd numbers.
lst = []
for i in range(201):
    if(i%2!=0):
        lst.append(i)
print (lst)