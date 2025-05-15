'''Το αρχείο κειμζνου onomata.txt κζλουμε να ζχει τθν δομι όπωσ φαίνεται δίπλα:
Συνεπϊσ κάκε γραμμι περιζχει όνομα και ακζραιο αρικμό τθν θλικία του χωριςμζνα με κόμμα.
Γράψτε πρόγραμμα Python το οποίο να διαβάηει τα ονόματα και τισ θλικίεσ από το αρχείο και
να καταχωρεί τα ονόματα ςε μία λίςτα onomata και τισ αντίςτοιχεσ θλικίεσ τουσ ςε μία λίςτα
ilikies'''
onomata=[]
ilikies=[]
a=[]
b=[]
f=open("onomata2.txt", "r")
for line in f:
	data=line.split(",")
	onomata.append(data[0])
	a.append(data[1][:-1])
for number in a:
	ilikies.append(int(number))
print(onomata)
print (ilikies)
	





f.close()
