'''Σε μία στρατιωτική άσκηση συμμετείχαν 500 οπλίτες οι οποίοι χωρίστηκαν σε τρεις
ομάδες : την ομάδα «Αετός», την ομάδα «Γεράκι» και την ομάδα «Χελιδόνι». Να γραφεί
πρόγραμμα που θα διαβάζει για τον κάθε οπλίτη την ηλικία του και το όνομα της
ομάδας στην οποία συμμετέχει και να εμφανίζει τη μεγαλύτερη ηλικία οπλίτη που
ανήκει στην ομάδα «Γεράκι».'''
maxage=0
for i in range(5):
    age=int(input("Poso xronon einai o "+str(i+1)+"os oplitis : "))
    team=input("Se poia omada anhkei : ")
    if team=="geraki" and age>maxage:
        maxage=age
print("H megalyterh hlikia sthn omada geraki einai ",maxage," xronon")
