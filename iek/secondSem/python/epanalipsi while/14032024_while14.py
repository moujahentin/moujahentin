'''14.Σε μία δημοπρασία του οίκου GK που διεξήχθη τον Δεκέμβριο του 2008, παρουσιάστηκαν
πίνακες τριών γνωστών Ελλήνων ζωγράφων με ονόματα Α,Β,Γ, με σκοπό τη συγκέντρωση
χρημάτων για ανέγερση ενός νοσοκομείου. Να γραφεί πρόγραμμα το οποίο :
• Για κάθε πίνακα ζωγραφικής που δημοπρατήθηκε, να διαβάζει το όνομα του καλλιτέχνη (Α
ή Β ή Γ), το έτος δημιουργίας του έργου και την τιμή πώλησής του. Το τέλος του
διαβάσματος θα γίνει με πληκτρολόγηση τελείας στο όνομα του καλλιτέχνη.
• Να υπολογίζει και να εμφανίζει :
◦ την υψηλότερη τιμή στην οποία πουλήθηκε ένας πίνακας ζωγραφικής καθώς και το
όνομα του καλλιτέχνη που τον δημιούργησε.
◦ Το όνομα του καλλιτέχνη στον οποίο ανήκε ο πίνακας με τη μεγαλύτερη ηλικία.
◦ Το πλήθος των έργων που δημοπρατήθηκαν από κάθε έναν καλλιτέχνη.
◦ Το ποσό χρημάτων που συγκεντρώθηκε από την δημοπράτηση των έργων.'''

name=str(input("Dose onoma kallitexni : "))
maxprice=0
maxname=""
minyear=9999
minname=""
ca=0
cb=0
cc=0
totalprice=0
while name!=".":
	if name=='A' or name=='a':
		ca+=1
	if name=='B' or name=='b':
		cb+=1
	if name=='C' or name=='c':
		cc+=1
	year=int(input("Dose etos dhmiourgias ergou : "))
	if year<minyear:
		minyear=year
		minname=name
	price=float(input("Dose timi polisis ergou : "))
	totalprice+=price
	if price>maxprice:
		maxname=name
		maxprice=price
	name=str(input("Dose onoma kallitexni : "))	
if totalprice==0:
	print()
else:
	print("H megaliteri timi enos ergou einai ",maxprice,"tou kallitexni ",maxname)
	print("To palaiotero ergo einai tou kallitexni ",minname)
	print("O kallitexnis A eixe ",ca,"erga")
	print("O kallitexnis B eixe ",cb,"erga")
	print("O kallitexnis C eixe ",cc,"erga")
	print("To synoliko poso pou mazeutike einai ",totalprice)


