# Write a Python code to compute maximum and summation of only integer command line parameters.

import sys

args = sys.argv[1:]
nums = []

for i in args:
    if i.isdigit():
        nums.append(int(i))

print (args)
print(nums)
print("Sum Is : ",sum(nums))
print("Max : ",max(nums))