'''Το αρχείο κειμζνου onomata.txt ζχει τθν δομι όπωσ φαίνεται δίπλα
Συνεπϊσ οι γραμμζσ που βρίςκονται ςε περιττζσ κζςεισ περιζχουν ονόματα ατόμων και οι
γραμμζσ που βρίςκονται ςε άρτιεσ κζςεισ περιζχουν ςε ακζραιο αρικμό τθν θλικία του
αντίςτοιχου ατόμου.
Γράψτε πρόγραμμα Python το οποίο να διαβάηει τα ονόματα και τισ θλικίεσ από το
αρχείο, γραμμι προσ γραμμι και ανάλογα αν θ γραμμι είναι περιττι ι άρτια να καταχωρεί τα
ονόματα ςε μία λίςτα onomata και τισ αντίςτοιχεσ θλικίεσ τουσ ςτθ λίςτα ilikies'''
onomata=[]
ilikies=[]
strilikies=[]
f=open("onomata1.txt","r")
counter=1
for line in f:
	if counter%2==1:
		onomata.append(line[:-1])
	
	else:
		strilikies.append(line[:-1])
	counter+=1
for number in strilikies:
	ilikies.append(int(number))
print(onomata)
print(ilikies)
