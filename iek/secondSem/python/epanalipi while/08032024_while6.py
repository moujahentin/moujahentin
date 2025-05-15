'''Να γραφεί πρόγραμμα που θα διαβάζει συνεχώς ακέραιους αριθμούς, μέχρι να δοθεί ένας
αρνητικός αριθμός, και θα εμφανίζει το πλήθος όλων των αριθμών που διαβάστηκαν εκτός του
αρνητικού αριθμού.'''

count=0
number=int(input("Dwse enan ekeraio : "))
while number>0:
    count=count+1
    number=int(input("Dwse enan ekeraio : "))
print("To plithos ton akeraion einai",count)
