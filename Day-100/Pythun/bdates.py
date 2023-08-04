bdates = []

for i in range(5):
    data = input("Enter {i+1} (YYYY-MM-DD): ")
    bdates.append(data)
    
print(bdates)

bdates.sort(reverse=True)

print(bdates)