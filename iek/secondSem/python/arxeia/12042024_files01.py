''' Γράψτε πρόγραμμα Python το οποίο να διαβάηει από το χριςτθ 100 αρικμοφσ και να
τουσ αποκθκεφει ζνα αρικμό ςε κάκε γραμμι ςτο αρχείο numbers.txt.'''

f=open("numbers.txt","w")
for i in range(10):
	number=int(input("Number : "))
	f.write(str(number)+"\n")

f.close()
