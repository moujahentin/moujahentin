'''Στον τελικό του διαγωνισμού «Παιδική Ζωγραφική» έλαβαν μέρος τρεις νεαροί,
οι οποίοι βαθμολογήθηκαν για τη ζωγραφιά τους. Να γραφεί πρόγραμμα που θα
διαβάζει το επίθετο, το όνομα και τον βαθμό που έλαβε κάθε ένας από αυτούς
και να εμφανίζει το επίθετο και το όνομα του νεαρού με τον καλύτερο βαθμό.
Θεωρείστε ότι όλοι οι νεαροί έλαβαν διαφορετικό βαθμό.'''
surname1=input('dwse epitheto : ')
name1=input('dwse onoma : ')
grade1=int(input('dwse bathmo : '))
print()
surname2=input('dwse epitheto : ')
name2=input('dwse onoma : ')
grade2=int(input('dwse bathmo : '))
print()
surname3=input('dwse epitheto : ')
name3=input('dwse onoma : ')
grade3=int(input('dwse bathmo : '))
print()
max=grade1
maxname=name1
maxsurname=surname1
if grade2>max:
    max=grade2
    maxname=name2
    maxsurname=surname2
if grade3>max:
    max=grade3
    maxname=name3
    maxsurname=surname3
print('to kalytero bathmo ehei o ',maxsurname, maxname)
