'''14. Σε μία δημοπρασία του οίκου GK που διεξήχθη τον Δεκέμβριο του 2008, παρουσιάστηκαν
πίνακες τριών γνωστών Ελλήνων ζωγράφων με ονόματα Α,Β,Γ, με σκοπό τη συγκέντρωση
χρημάτων για ανέγερση ενός νοσοκομείου. Να γραφεί πρόγραμμα το οποίο :
• Για κάθε πίνακα ζωγραφικής που δημοπρατήθηκε, να διαβάζει το όνομα του καλλιτέχνη (Α
ή Β ή Γ), το έτος δημιουργίας του έργου και την τιμή πώλησής του. Το τέλος του
διαβάσματος θα γίνει με πληκτρολόγηση τελείας στο όνομα του καλλιτέχνη.
• Να υπολογίζει και να εμφανίζει :
◦ την υψηλότερη τιμή στην οποία πουλήθηκε ένας πίνακας ζωγραφικής καθώς και το
όνομα του καλλιτέχνη που τον δημιούργησε.
◦ Το όνομα του καλλιτέχνη στον οποίο ανήκε ο πίνακας με τη μεγαλύτερη ηλικία.
◦ Το πλήθος των έργων που δημοπρατήθηκαν από κάθε έναν καλλιτέχνη.
◦ Το ποσό χρημάτων που συγκεντρώθηκε από την δημοπράτηση των έργων.'''

maxprice=0
maxname=""
ma=0
mb=0
mc=0
minyear=2008
minname=""
sumprice=0
name=input("Dose onoma kalitexni : ")
while(name!="."):
    year=int(input("Dose etos dimiourgias ergou : "))
    price=int(input("Dose timi polisis ergou : "))
    if(price>maxprice):
        maxprice=price
        maxname=name
    if(year<minyear):
        minyear=year
        minname=name
    if(name=="A"):
        ma+=1
    elif(name=="B"):
        mb+=1
    elif(name=="C"):
        mc+=1
    sumprice+=price
    name=input("Dose onoma kalitexni : ")
print("H megalyterh timi polisis htan ",maxprice," tou kallitexni ",maxname)
print("O giraioteros pinakas einai toy kallitexni ",minname)
print("synolo ergon tou A : ",ma)
print("synolo ergon tou B : ",mb)
print("synolo ergon tou C : ",mc)
print("Ta synolika esoda einai : ",sumprice)
