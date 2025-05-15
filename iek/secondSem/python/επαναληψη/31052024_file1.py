onomata=[]
ilikies=[]
strilikies=[]
count=1
f=open("onomata.txt","r")
for word in f:
    if count%2==1:
        onomata.append(word[:-1])
    else:
        ilikies.append(int(word))
    count+=1
print(onomata)
print(ilikies)
