'''12.Να γραφεί πρόγραμμα που θα διαβάζει συνεχώς πραγματικούς αριθμούς μέχρι να δώσουμε
τον αριθμό μηδέν και εάν έχει δοθεί έστω και ένας αριθμός, να εμφανίζει τον μικρότερο από
αυτούς. Εάν δεν έχει διαβαστεί κανένας αριθμός, να εμφανίζει το μήνυμα «Δεν διαβάστηκαν
αριθμοί».'''

x=int(input("Give an integer : "))
min = x
if x==0:
	print('Den diavastikan arithmoi')
else:
	while x!=0:
		if x<min and x!=0:
			min=x
		x=int(input("Give an integer : "))
	print("O mikroteros einai : ",min)
	
