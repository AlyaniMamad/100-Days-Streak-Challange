# Write a Python code to create a list of first 100 positive odd numbers.
mylst = []

for i in range(201):
    if i%2!=0:
        mylst.append(i)
    
print(mylst)