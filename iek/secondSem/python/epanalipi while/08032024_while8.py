'''Να γραφεί πρόγραμμα που θα διαβάζει συνεχώς ακέραιους αριθμούς, μέχρι να δώσουμε
αριθμό το μηδέν. Θα υπολογίζει και θα εμφανίζει το πλήθος των θετικών και το πλήθος των
αρνητικών αριθμών που δόθηκαν.'''

sumthetikon=0
sumarnitikon=0
while True:
    number=int(input("Dwse enan akeraio : "))
    if number==0:
        break
    else:
        if number>0:
            sumthetikon+=1
        elif number<0:
            sumarnitikon+=1
print("To plithos tonn thetikos einai : ",sumthetikon)
print("to plithos ton arnitikon einai : ",sumarnitikon)
