'''Να γραφεί πρόγραμμα που θα διαβάζει συνεχώς ακέραιους αριθμούς μέχρι να δοθεί το μηδέν.
Να υπολογίζει και να εμφανίζει το άθροισμα των θετικών αριθμών που διαβάστηκαν.'''
sum=0
number=int(input("Dwse enan akeraio : "))
while number!=0:
    if number>0:
        sum=sum+number
    
    number=int(input("Dwse enan akeraio : "))
print("To synolo ton akeraion thetikon einai",sum)
