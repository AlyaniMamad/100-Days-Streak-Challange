mystr = input("Enter String : ")

words = mystr.split()

filt_word = []

for i,j in enumerate(words):
    if i==0 or j!=words[i-1]:
        filt_word.append(j)
            
filt_text=" ".join(filt_word)
print(filt_text)
            