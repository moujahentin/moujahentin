'''Η Γ' τάξη ενός Λυκείου αποτελείται από 90 μαθητές και αποφάσισε να βοηθήσει
οικονομικά το παιδικό χωριό SOS, συγκεντρώνοντας ένα χρηματικό ποσό.Για το σκοπό
αυτό, ορίστηκε ένας καθηγητής ως υπεύθυνος για τη συγκέντρωση των χρημάτων και ο
κάθε μαθητής της Γ' τάξης του έδωσε ένα ποσό σε ευρώ. Να γραφεί πρόγραμμα που θα
διαβάζει για τον κάθε έναν μαθητή τα χρήματα που έδωσε στον υπεύθυνο καθηγητή
και να εμφανίζει το συνολικό ποσό που συγκεντρώθηκε από όλους τους μαθητές.
'''


total=0
for i in range(1,91,1):
    lefta=float(input("Posa edwse o "+str(i)+"os mathitis : "))
    total=total+lefta
print("To poso poy sygkentrothike einai "+str(total)+" euro")