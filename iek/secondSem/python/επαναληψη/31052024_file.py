f=open('onomata.txt','w')
for i in range(3):
    name=input("Dwse onoma : ")
    age=int(input("Dose ilikia : "))
    f.write(name + "\n" + str(age)+"\n")

f.close()
