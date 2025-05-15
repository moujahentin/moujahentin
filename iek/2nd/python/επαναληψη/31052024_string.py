count=0
capital="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
for i in range (5):
    word=input("Dwse "+str(i+1)+"h leksh : ")
    if word[0] in capital:
        count+=1
print(count)

count=0
for i in range (5):
    word=input("Dwse "+str(i+1)+"h leksh : ")
    if word[0].upper()==word[0]:
        count+=1
print(count)
