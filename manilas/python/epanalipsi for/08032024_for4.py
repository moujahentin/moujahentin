'''Η αμαξοστοιχία «Αίολος» διαθέτει 350 θέσεις επιβατών και εκτελεί μηνιαίως 25
δρομολόγια από Θεσσαλονίκη προς Βελιγράδι. Να γραφεί πρόγραμμα που θα διαβάζει
πόσους επιβάτες είχε σε κάθε ένα δρομολόγιο που πραγματοποίησε στη διάρκεια ενός
μήνα, και να εμφανίζει σε τι ποσοστό ανέρχεται ο αριθμός των δρομολογίων που είχαν
πληρότητα 100 % ( η αμαξοστοιχία ήταν πλήρης ). Θεωρήστε ότι ο αριθμός επιβατών
παίρνει μία τιμή μεταξύ 1 και 350'''

plhrothta=0
for i in range(25):
    epivates=int(input("Posous epivates eixe to "+str(i+1)+"o dromologio : "))
    if epivates==350:
        plhrothta +=1
print("To pososto plhrothtas einai ",plhrothta/25*100,"%")
    
