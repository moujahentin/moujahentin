'''Στο αγώνισμα των 100 μέτρων με εμπόδια συμμετείχαν 24 αθλητές. Να γραφεί
πρόγραμμα που για κάθε έναν αθλητή θα διαβάζει το ονοματεπώνυμο του και τον
χρόνο σε ακρίβεια δύο δεκαδικών ψηφίων που χρειάστηκε, για να καλύψει την
παραπάνω απόσταση (χρόνος τερματισμού). Θα εμφανίζει το όνομα του νικητή του
αγωνίσματος.'''

min=9999
minname=""
for i in range(24):
    athlitis=input("Pos legetai o "+str(i+1)+"os athlitis : ")
    xronos=float(input("Poso xrono ekane : "))
    if xronos<min:
        min=xronos
        minname=athlitis
print("Ton kalytero xrono ekane o ",minname," me xrono ",min)
    
    
