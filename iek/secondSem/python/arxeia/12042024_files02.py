'''Γράψτε πρόγραμμα Python το οποίο να διαβάηει από το χριςτθ 100 ονόματα και να τα
αποκθκεφει ζνα όνομα ςε κάκε γραμμι ςτο αρχείο onomata.txt.'''

f=open("onomata.txt","w")
for i in range(5):
	name=input("Onoma : ")
	f.write(name+"\n")

f.close()
