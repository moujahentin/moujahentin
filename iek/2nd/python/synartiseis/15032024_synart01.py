'''1. Ο αριθμός των υπαλλήλων που απασχολούνται σε μία αίθουσα δεξιώσεων εξαρτάται από τον
αριθμό των προσκεκλημένων ατόμων της κάθε δεξίωσης σύμφωνα με τον πίνακα που ακολουθεί

Προσκεκλημένοι	Αριθμός Υπαλλήλων
μέχρι 300			 8
301 - 800			12
801 - 1500			15
1501 - 2000 		20
Να αναπτύξετε πρόγραμμα σε Python το οποίο για μία δεξίωση :
Θα διαβάζει τον αριθμό των προσκεκλημένων ατόμων της, εξασφαλίζοντας ότι είναι ένας θετικός
αριθμός το πολύ 2000.
Καλεί συνάρτηση η οποία δέχεται τον αριθμό των προσκεκλημένων ατόμων, υπολογίζει και επι-
στρέφει τον αριθμό των υπαλλήλων που θα απασχοληθούν για την υλοποίηση της.
Εμφανίζει το ποσό που αντιστοιχεί στην συνολική αμοιβή όλων των απασχολούμενων υπαλλήλων
της δεξίωσης, αν το ημερομίσθιο του κάθε υπαλλήλου είναι 50 €'''

def f1(x):
	if x<301:
		y=8
	elif x<801:
		y=12
	elif x<1501:
		y=15
	else:
		y=20
	return y
#-----------------------------main-------------------------------------------
kalesmenoi=int(input("Posoi einai oi kalesmenoi : "))
while kalesmenoi<=0 or kalesmenoi>2000:
	kalesmenoi=int(input("Posoi einai oi kalesmenoi : "))
ypall=f1(kalesmenoi)
print("Gia thn deksiosi tha plhrosoume ",ypall*50,"euro.")
