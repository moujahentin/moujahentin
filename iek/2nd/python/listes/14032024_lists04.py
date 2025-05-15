'''4. Ο Δήμος Π διοργανώνει διεθνές αγώνα δρόμου από την πόλη Α μέχρι την πόλη Β με συμμετοχή
1500 αθλητών. Να αναπτύξετε πρόγραμμα σε Python που θα διαβάζει το ονοματεπώνυμο του
κάθε αθλητή που συμμετείχε και τον χρόνο με ακρίβεια χιλιοστού του δευτερολέπτου, που
χρειάστηκε για να καλύψει την απόσταση και να τα τοποθετεί σε κατάλληλες λίστες. Να
εμφανίζει το ονοματεπώνυμο του αθλητή που τερμάτισε πρώτος (σε λιγότερο χρόνο).'''
N=5
name=[]
time=[]
for i in range(N):
	name.append(str(input("Dwse onoma "+str(i+1)+"ou athliti : ")))
	time.append(float(input("Dwse xrono "+str(i+1)+"ou athliti : ")))
print("O athlitis me ton mikrotero xrono einai o "+str(name[time.index(min(time))])+" me xrono "+str(min(time)))

