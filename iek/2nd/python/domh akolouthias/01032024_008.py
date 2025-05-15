'''Ο Κωστίκας και ο Γιωρίκας δούλεψαν σε μία οικοδομή και πήραν και οι δύο μαζί Χ
ευρώ. Να γραφεί πρόγραμμα το οποίο υλοποιεί τον παρακάτω αλγόριθμο :
◦ Διαβάζει το Χ ποσό χρημάτων.
◦ Διαβάζει πόσες ημέρες εργάστηκε ο Κωστίκας και πόσες ημέρες εργάστηκε ο
Γιωρίκας στην οικοδομή.
◦ Υπολογίζει και εμφανίζει πόσα χρήματα θα πάρει ο κάθε ένας ξεχωριστά.'''
xr = int(input("posa lefta phrate : "))
mergior = int(input("poses meres doulepse o giorikas : "))
merkost = int(input("poses meres doulepse o kostikas : "))
merok = xr/(mergior+merkost)
print("o giorikas 8a parei ",merok*mergior,"euro")
print("o kostikas 8a parei ",merok*merkost,"euro")
