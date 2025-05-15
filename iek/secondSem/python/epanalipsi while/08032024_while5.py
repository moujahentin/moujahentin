'''Να γραφεί πρόγραμμα που θα διαβάζει το βάρος σε κιλά (ακέραια τιμή) του κάθε παιδιού που
επιβιβάζεται σε ένα παιδικό παιχνίδι ενός λούνα παρκ, μέχρι να δοθεί ως βάρος σε κιλά
παιδιού το μηδέν. Να υπολογίζει και να εμφανίζει το συνολικό βάρος όλων των παιδιών που
ανέβηκαν στο παιχνίδι.'''
sum=0
kila=int(input("Posa kila einai to prwto paidi : "))
while kila!=0:
    sum=sum+kila
    kila=int(input("Posa kila einai to epomeno paidi : "))
print("To synoliko baros ton paidion einai",sum)
