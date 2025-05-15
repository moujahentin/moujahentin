'''Εργασία
Ένας ταξιδιωτικός οδηγός αξιολογεί τα ξενοδοχεία μίας τουριστικής περιοχής. Για τον
σκοπό αυτό χρησιμοποιεί δέκα (10) κριτές. Η βαθμολογία του κάθε κριτή είναι από 1
έως και 5 μονάδες. Η συνολική βαθμολογία του κάθε ξενοδοχείου προκύπτει από το
άθροισμα των βαθμών των δέκα (10) κριτών.
Να αναπτύξετε πρόγραμμα σε γλώσσα προγραμματισμού Python, το οποίο να
πραγματοποιεί τα παρακάτω:
Γ1.Για κάθε ξενοδοχείο:
α) Να διαβάζει το όνομά του.
β) Να διαβάζει τις βαθμολογίες των δέκα (10) κριτών με έλεγχο ορθότητας
τιμών.
γ) Η εισαγωγή να τερματίζει όταν δοθεί ως όνομα ξενοδοχείου η λέξη "ΤΕΛΟΣ".
Θεωρήστε ότι υπάρχουν τουλάχιστον δύο (2) ξενοδοχεία.
Γ2.Να υπολογίζει και να εμφανίζει τη συνολική βαθμολογία κάθε ξενοδοχείου.
Γ3.Να βρίσκει και να εμφανίζει το όνομα του ξενοδοχείου με τη μεγαλύτερη
συνολική βαθμολογία. Θεωρήστε ότι είναι μοναδικό.
Γ4.Να υπολογίζει και να εμφανίζει το ποσοστό των ξενοδοχείων με συνολική
βαθμολογία μικρότερη του σαράντα (40) στο σύνολο των ξενοδοχείων.'''
#----------------------------------------------------
import os
#----------------------------------------------------
def cleanScreen():
	if os.name == 'posix':
		_=os.system('clear')
	else:
		_=os.system('cls')
#----------------------------------------------------
def line():
    for i in range(55):
        print("-", end="-")
    print()
#----------------------------------------------------
def getName(hotelCount):
    while True:
        name = input("Πληκτρολογήστε το όνομα του "+str(hotelCount)+"ου ξενοδοχείου : ")
        if name == "ΤΕΛΟΣ":
            exitCheck = input("Θέλετε να τερματίσετε το πρόγραμμα; (Ναι/Οχι): ").lower()
            if exitCheck in ["yes", "y", "ναι", "ν"]:
                return None  
            else:
                continue  
        if input("	Είναι το όνομα "+str(name)+" σωστό; (Ναι/Οχι): ").lower() in ["yes", "y", "ναι", "ν"]:
            return name
#------------------------------------------------
def getScore(hotel_name, judge):
    while True:
        try:
            score = int(input("Πληκτρολογήστε την βαθμολογία του "+str(judge)+"ου κριτή για το ξενοδοχείο "+str(hotel_name)+" : "))
            if 1 <= score <= 5:
                if input("	Είναι η βαθμολογία σωστή; (Ναι/Οχι): ").lower() in ["yes", "y", "ναι", "ν"]:
                    return score
            else:
                print("Η βαθμολογία πρέπει να είναι ανάμεσα στο 1 και το 5. : ")
        except ValueError:
            print("Εισάγεται έναν ακέραιο. : ")
#------------------------------------------------
def results(hotelNames, SCORE):
	maxHotelSum=0
	maxHotelSumName=""
	below40=0
	for i in range(len(hotelNames)):
		hotelSum=0
		for j in range(10):
			hotelSum+=SCORE[i][j]
		if hotelSum>maxHotelSum:
			maxHotelSum=hotelSum
			maxHotelSumName=hotelNames[i]
		if hotelSum<40:
			below40+=1
		print("Η συλολικη βαθμολογία του ξενοδοχείου ",hotelNames[i]," είναι ",hotelSum)
	line()
	print("Το ξενοδοχείο με την μεγαλύτερη βαθμολογία είναι το ", maxHotelSumName)	
	below40percent=below40/len(hotelNames)*100
	line()
	print("Το ποσοστό των ξενοδοχείων με συνολική βαθμολογία κάτω των 40 είναι %.2f" %below40percent,"%")
#---------------------------------------------------- 
def chart(hotelNames,SCORE):
	print("Ξενοδοχεία\Κριτές|",end=" ")
	for i in range(10):
		print("%6d" %(i+1), end=" ")
	print("   Συνολική Βαθμολογία")
	line()
	for i in range(len(hotelNames)):
		print("%17s" %hotelNames[i], end ="| ")
		for j in range(10):
			print("%6d" %SCORE[i][j], end=" ")
		print("%12d" %sum(SCORE[i]))
	line()
#--------------------MAIN----------------------------
cleanScreen()
hotelNames = []
SCORE = []
hotelCount = 1
fileopen=open("results.txt","w")
print("Πληκτρολογήστε το όνομα του ξενοδοχείου.")
print("Έπειτα πληκτρολογήστε τον βαθμό του κάθε κριτή.")
print("Πληκτρολογήστε την λέξη ΤΕΛΟΣ για τερματισμό του προγράματος.")
input("Πιέστε Enter για έναρξη του προγράμματος")
cleanScreen()
while True:
    name = getName(hotelCount)
    if name is None:
        pass
    else:
        fileopen.write(name+"\n")
    if name is None:  
        break
    hotel_scores = []
    for i in range(10):
        score = getScore(name, i + 1)
        hotel_scores.append(score)
        if i == 9:
            fileopen.write(str(score) + "\n")
        else:
            fileopen.write(str(score) + ",")
    hotelNames.append(name)
    SCORE.append(hotel_scores)
    hotelCount += 1
    cleanScreen()
    
if hotelCount!=1:
	line()
	results(hotelNames, SCORE)
	line()
	chartCheck=input("Θέλετε να εκτυπωθεί ο αναλυτικός πίνακας; (Nαι/;Oχι) :").lower()
	print()
	if chartCheck in  ["yes", "y", "ναι", "ν"]:
		cleanScreen()
		chart(hotelNames,SCORE)
		input("Πιέστε Enter για τερματισμό του προγράμματος")
fileopen.close()
print()



