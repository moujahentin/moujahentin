'''Η θερμοκρασία στο εσωτερικό του Ηλίου είναι 20.000.000 βαθμοί Κέλβιν. Ο καθηγητής ρώτησε
τους μαθητές μιας τάξης ποια είναι η θερμοκρασία στο εσωτερικό του Ηλίου σε βαθμούς
Κέλβιν και την απάντηση του καθενός την εισάγει σε έναν αλγόριθμο που έχει δημιουργήσει.
Να αναπτύξετε πρόγραμμα που υλοποιεί τον αλγόριθμο του καθηγητή που θα διαβάζει την
απάντηση του κάθε μαθητή και να βρίσκει και να εμφανίζει το πλήθος των μαθητών που
βρήκαν τη σωστή απάντηση. Το τέλος του διαβάσματος θα γίνεται με εισαγωγή μηδενικής
θερμοκρασίας ως απάντηση.
Παρατήρηση : Η απάντηση του μαθητή είναι ένας ακέραιος αριθμός.'''
sum=0
while True:
    temperature=int(input("apanthsh mathiti :"))
    if temperature==0:
        break
    elif temperature==20000000:
        sum=sum+1
print("Oi swstes apanthseis einai",sum)
        
        
