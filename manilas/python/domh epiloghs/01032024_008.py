'''Ένα ζευγάρι πρόκειται να παντρευτεί, στο τέλος του μήνα. Για την
πραγματοποίηση της γαμήλιας δεξίωσης τους, οι μελλόνυμφοι συμφώνησαν με
τον ιδιοκτήτη μιας αίθουσας δεξιώσεων ότι το ποσό πληρωμής της δεξίωσης θα
εξαρτηθεί από τον αριθμό των καλεσμένων ως εξής : εάν οι καλεσμένοι είναι
μέχρι και 500 άτομα, τότε θα πληρώσουν 15 € για κάθε καλεσμένο.
Εάν οι καλεσμένοι είναι περισσότεροι από 500 και μέχρι 800 άτομα, θα πληρώσουν 13 € για
κάθε καλεσμένο. Αν οι καλεσμένοι είναι περισσότεροι από 800 και μέχρι 1000
άτομα, θα πληρώσουν 10000 €. Ενώ αν οι καλεσμένοι ξεπερνάνε τους 1000, τότε
θα πληρώσουν 10000€ και επιπλέον 10 € για κάθε άτομο πέραν των 1000. Να
γραφεί πρόγραμμα που θα διαβάζει τον αριθμό των καλεσμένων
που έχει προσκαλέσει το ζευγάρι στη δεξίωση τους και να υπολογίζει και να εμφανίζει το
ποσό που θα καταβάλει στον ιδιοκτήτη της αίθουσας.'''
x = int(input("posoi einai oi kalesmenoi : "))
if x<501:
    money=x*15
elif x>500 and x<801:
    money=x*13
elif x>800 and x<1001:
    money=10000
else:
    money=10000+(x-1000)*10
print('ta gamhsiatika einai ',money,' €')
