'''13.Σε μία βιομηχανική περιοχή υπάρχει ένας αισθητήρας που ανιχνεύει και καταγράφει το επίπεδο
του διοξειδίου του άνθρακα της ατμόσφαιρας. Να αναπτύξετε πρόγραμμα που:
• Θα διαβάζει συνεχώς τιμές (αριθμοί με ένα δεκαδικό ψηφίο) για το διοξείδιο του άνθρακα,
όπως τις ανιχνεύει ο αισθητήρας, μέχρι να διαβαστεί μηδενική τιμή.
• Εάν ο αισθητήρας έχει ανιχνεύσει έστω και μία τιμή τότε να βρίσκει και να εμφανίζει την
υψηλότερη τιμή που διαβάστηκε, διαφορετικά να εμφανίζει το μήνυμα «Δεν ανιχνεύτηκαν
τιμές».'''


x=float(input("Dioksidio tou anthraka. Dose timi : "))
max=x
if x==0:
	print('Den anixneytikan times')
else:
	while x!=0:
		if x>max and x!=0:
			max=x
		x=float(input("Dioksidio tou anthraka. Dose timi : "))
	print("H megalyteri timi einai  : ",max)
	
