'''Ένα κατάστημα αθλητικών ειδών παρέχει την εξής προσφορά σε όποια ποδοσφαιρική ομάδα αγοράσει αθλητικά παπούτσια : εάν αγοραστούν πάνω από 18
ζευγάρια αθλητικών παπουτσιών, τότε δεν χρεώνονται τα 3, αν αγοραστούν από
10 μέχρι και 18 ζευγάρια παπουτσιών τότε δεν χρεώνονται τα δύο, αν αγοραστούν από 5 μέχρι και 9 ζευγάρια δεν χρεώνεται το 1 και για αγορά λιγότερων
από 5 δεν ισχύει η προσφορά.
Να γραφεί πρόγραμμα το οποίο :
• Θα διαβάζει την τιμή που κοστίζει το ένα ζευγάρι αθλητικών παπουτσιών.
• Θα διαβάζει πόσα ζευγάρια αθλητικών παπουτσιών αγόρασε μία ποδοσφαιρική ομάδα.
• θα υπολογίζει και θα εμφανίζει το ποσό που θα πληρώσει η ομάδα στο κατάστημα.'''

y = float(input("poso kanei to zeygari : "))
x = int(input("posa zeugaria phrate : "))
if x>18 :
    x=x-3
elif x>9 and x<19:
    x=x-2
elif x>4 and x<10:
    x=x-1
else :
    x=x
print('tha plhrwsete ',x*y,'euro')