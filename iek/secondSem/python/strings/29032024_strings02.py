'''Nα γραφεί πρόγραμμα σε Python που να διαβάζει 5 λέξεις.
Να εμφανίζει τη λέξη με το μεγαλύτερο μήκος.'''
max= -1
for i in range(5):
   word=input("Dose "+str(i+1)+"h leksh : ")
   if len(word)>max:
       max=len(word)
       maxName = word
print (maxName)
