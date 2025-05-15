'''Να γραφεί πρόγραμμα σε Python που να διαβάζει μία λέξη. Να υπολογίζει και να εμφανίζει το
μήνυμα 'όλα κεφαλαία' αν όλα τα γράμματα είναι κεφαλαία ή το μήνυμα 'όχι όλα κεφαλαία'
αν υπάρχουν και μικρά γράμματα.'''
flag=True
word=input("Dose mia leksi : ")
for x in word:
    if 'A'<=x<'a':
        continue
    else:
        flag=False
if flag==True:
    print("Kefalaia")
else:
    print("Oxi kefalaia")
