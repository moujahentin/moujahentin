'''1. Μία βιομηχανία κατασκευής κεριών για την περίοδο του Πάσχα κατασκεύασε 200 διαφορετικά
σχέδια λαμπάδας . Να γραφεί πρόγραμμα σε Python που :
• Με κατάλληλο μήνυμα θα ζητάει και θα διαβάζει την τιμή της κάθε μιας λαμπάδας σε ευρώ
με ακρίβεια δύο δεκαδικών ψηφίων και θα την καταχωρίζει στη λίστα Τ, εξασφαλίζοντας ότι
είναι θετικός αριθμός.
• Εξετάζοντας τη λίστα Τ, να υπολογίζει και να εμφανίζει :
◦ Τη μέση τιμή πώλησης λαμπάδας
◦ Το πλήθος των λαμπάδων με τιμή πώλησης πάνω από 10 €.'''
T=[]
for i in range(200):
	price=float(input("Dose timi : "))
	while price<=0:
		price=float(input("Dose timi : "))
	T.append(price)
sumprice=0
cover10=0
for i in range(200):
	sumprice+=T[i]
	if T[i]>10:
		cover10+=1
averprice=sumprice/len(T)
print("H mesh timi polisis einai ",averprice)
print("Timi polisis pano apo 10 euro exoun ",cover10)
		
