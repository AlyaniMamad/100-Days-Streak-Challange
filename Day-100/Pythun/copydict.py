# Given a dictionary: d_existing (1:111,2:222,3:333) Programmatically create 
# another dictionary d new which should have the same elements as of the
# d_existing dictionary elements such that changes made in the d new dictionary 
# do not affect the d existing dictionary.

d_existing = {1:111,2:222,3:333}
d_new = d_existing.copy()

d_new[4] = 444

print("Existing : ",d_existing)
print("New Dict : ",d_new)

