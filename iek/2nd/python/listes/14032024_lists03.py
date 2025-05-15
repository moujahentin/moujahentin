'''3. Μία σύγχρονη πτηνοτροφική μονάδα παρακολουθεί την ημερήσια παραγωγή αυγών, την οποία
και καταγράφει σε ηλεκτρονική μορφή. Να γραφεί πρόγραμμα σε Python το οποίο :
• Για κάθε μία ημέρα του μήνα Μαρτίου, να διαβάζει την ημερήσια παραγωγή αυγών
(αριθμός αυγών) και να την αποθηκεύει στη λίστα Α.
• Θα υπολογίζει και θα εκτυπώνει τη μέση ημερήσια παραγωγή αυγών.
• Θα εκτυπώνει τον αριθμό της κάθε ημέρας του μήνα, που η ημερήσια παραγωγή αυγών
ξεπέρασε τη μέση ημερήσια παραγωγή αυγών του μήνα.'''
import random
N=31
A=[]
sumeggs=0
avereggs=0
for i in range (N):
	#eggs=int(input("Posa auga ekane thn "+str(i+1)+"h mera : "))
	#while eggs<0:
		#eggs=int(input("Posa auga ekane thn "+str(i+1)+"h mera : "))
	eggs=random.randint(1,200)
	A.append(eggs)
print(A)
for i in range(N):
	sumeggs+=A[i]
avereggs=sumeggs/N
print("H mesh paragogh einai %.2f"%avereggs," auga")
print("Stis",end=" ")
for i in range(N):
	if A[i]>avereggs:
		print(i+1,end=" ")
print("Martiou kseperase thn mesh paragogi")
	
	
