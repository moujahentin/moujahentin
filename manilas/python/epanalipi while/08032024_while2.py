'''Να γραφεί πρόγραμμα που θα διαβάζει το όνομα ενός ατόμου και το αντίστοιχο βάρος του σε
γραμμάρια. Να εμφανίζει το όνομα του ατόμου και το βάρος του σε κιλά. Αυτό, θα
επαναλαμβάνεται για πολλά άτομα, μέχρι να δοθεί ως όνομα ατόμου το κενό.'''

onoma=input("Onoma : ")

while onoma!=" ":
    kila=int(input("Kila se grammaria : "))
    print(onoma, end='')
    print("%8.2f" %(kila/1000))
    onoma=input("Onoma : ")

