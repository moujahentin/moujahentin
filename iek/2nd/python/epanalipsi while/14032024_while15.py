'''15.Στις εξετάσεις του ΑΣΕΠ οι υποψήφιοι εξετάζονται σε τρεις θεματικές ενότητες. Ο βαθμός κάθε
θεματικής ενότητας είναι από 1 έως 100. Η συνολική βαθμολογία κάθε υποψηφίου προκύπτει
από τον μέσο όρο των βαθμών του στις τρεις θεματικές ενότητες. Ο υποψήφιος θεωρείται ως
επιτυχών, αν η συνολική βαθμολογία του είναι τουλάχιστον 55 και ο βαθμός του σε κάθε
θεματική ενότητα είναι τουλάχιστον 50.
Να γραφεί πρόγραμμα που για κάθε υποψήφιο :
• Να διαβάζει το όνομα του και τους βαθμούς του σε καθεμία από τις τρεις θεματικές
ενότητες. (Δεν απαιτείται έλεγχος εγκυρότητας δεδομένων).
• Να εμφανίζει τον μεγαλύτερο από τους βαθμούς που πήρε.
• Να εμφανίζει το όνομα και τη συνολική βαθμολογία του στην περίπτωση που είναι
επιτυχών.
• Το πρόγραμμα θα τερματίζει όταν δοθεί ως όνομα η λέξη «ΤΕΛΟΣ».
• Στο τέλος να εμφανίζει το όνομα του επιτυχόντα με τη μικρότερη συνολική βαθμολογία.
Θεωρείστε ότι είναι μοναδικός.
Διευκρίνηση : Υπάρχει τουλάχιστον ένας επιτυχόντας υποψήφιος.'''

name=str(input("Dose onoma ypopsifiou : "))
minsum=1000
minname=""
while name!="TELOS":
	maxg=0
	g1=int(input("Dose proto bathmo : "))
	maxg=g1
	g2=int(input("Dose deytero bathmo : "))
	if g2>maxg:
		maxg=g2
	g3=int(input("Dose trito bathmo : "))
	if g3>maxg:
		maxg=g3
	print("O megalyteros bathmos einai ",maxg)
	sum=(g1+g2+g3)/3	
	if g1>49 and g2>49 and g3 >49 and sum>54:
		print(name,"perase me sinoliki bathmologia ",sum)
		if sum<minsum:
			minsum=sum
			minname=name
	name=str(input("Dose onoma ypopsifiou : "))
if minsum==1000:
	print("Den yparxoun ypopshfioi.")
else:
	print(minname," perase me tin mikroteti bathmologia")
	
	
	


