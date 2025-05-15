''' Το αρχείο κειμζνου onomata.txt περιζχει ζνα όνομα ςε κάκε γραμμι.
Γράψτε πρόγραμμα Python το οποίο να διαβάηει τα ονόματα από το αρχείο και να τα
αποκθκεφει ςε μία λίςτα'''
NAMES=[]
f=open("onomata.txt","r")
for name in f:
	NAMES.append(name[:-1])
print (NAMES)
f.close()
