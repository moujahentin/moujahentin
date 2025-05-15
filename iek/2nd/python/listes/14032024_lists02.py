'''2. Ένα εργοστάσιο παράγει αναψυκτικό τύπου «κόλα» και το εμφιαλώνει σε γυάλινα μπουκάλια.
Να αναπτύξετε πρόγραμμα σε Python που :
• Για κάθε μία ημέρα του μήνα Ιουνίου να διαβάζει τον αριθμό μπουκαλιών που
εμφιαλώθηκαν και να τα αποθηκεύει στη λίστα ΜΡ.
• Να βρίσκει και να εμφανίζει :
◦ Τη συνολική ποσότητα μπουκαλιών που εμφιαλώθηκαν τον μήνα Ιούνιο.
◦ Τη μέση ημερήσια ποσότητα εμφιάλωσης μπουκαλιών.
◦ Ποιο δεκαπενθήμερο (1 ή 2) του μήνα, εμφιαλώθηκαν τα περισσότερα μπουκάλια.'''

MP=[]
for i in range(30):
	bottles=int(input("Mpoukalia pou emfialothikan hmera "+str(i+1)+" : "))
	while bottles<=0:
		bottles=int(input("Mpoukalia pou emfialothikan hmera "+str(i+1)+" : "))
	MP.append(bottles)
sumjune=0
sum15=0
sum30=0
for i in range(30):
	sumjune+=MP[i]
	if i<15:
		sum15+=MP[i]
	elif i>14:
		sum30+=MP[i]	
print("Kata ton mhna Iounio emfialothikan ",sumjune,"mpoukalia")
avermpouk=sumjune/30
print("H mesh posothta einai ",avermpouk)
if sum15>sum30:
	print("Perissotera mpoukalia to prwto dekapenthimero")
elif sum15<sum30:
	print("Perissotera mpoukalia to deytero dekapenthimero")
else:
	print("Einai isaksia ta dekapenthimera")
