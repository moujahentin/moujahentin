'''5. Ένας σταθμός μέτρησης θερμοκρασίας που είναι τοποθετημένος στο κέντρο της Λάρισας,
λαμβάνει μία φορά την ημέρα, στις 15:00, για κάθε μία ημέρα του μήνα Αυγούστου τη
θερμοκρασία που επικρατεί εκείνη τη στιγμή. Να γραφεί πρόγραμμα σε Python το οποίο θα
υλοποιεί τον παρακάτω αλγόριθμο :
• Να διαβάζει τις θερμοκρασίες αυτές και να τις τοποθετεί σε μία λίστα ΤΗ εξασφαλίζοντας οι
θερμοκρασίες να είναι από 10 έως και 50ο C.
• Να υπολογίζει και να εμφανίζει τη μέγιστη θερμοκρασία του μήνα.
• Να εμφανίζει όλες τις ημέρες του μήνα, στις οποίες καταγράφηκαν θερμοκρασίες ίσες με τη
μέγιστη θερμοκρασία.
• Να εμφανίζει το πλήθος των ημερών του παραπάνω ερωτήματος.
Παρατήρηση : Οι θερμοκρασίες καταγράφονται με ακρίβεια ενός δεκαδικού ψηφίου.'''

N=31
TH=[]
for i in range(N):
	grade=float(input("Dwse thermokrasia "+str(i+1)+"hs meras : "))
	while not (10<=grade<=50):
		grade=float(input("Dwse thermokrasia "+str(i+1)+"hs meras : "))
	TH.append(grade)
maxgrade=TH[0]
for i in range(len(TH)):
	if TH[i]>maxgrade:
		maxgrade=TH[i]
print("H megalyterh thermokrasia tou mhna einai ",maxgrade," bathmoi")
maxTH=[]
for i in range(len(TH)):
	if maxgrade==TH[i]:
		maxTH.append(i+1)
for x in maxTH:
	print(x,"tou mhnos",end=" ")
print(" eixame thn megalyterh thermokrasia")
print("Oi meres mou eixame thn megalyterh thermokrasia einai",len(maxTH))

	
