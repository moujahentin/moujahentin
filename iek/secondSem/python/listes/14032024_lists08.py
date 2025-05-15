'''8. Να γραφεί τμήμα προγράμματος σε Python που να δημιουργεί την παρακάτω λίστα :
0 1 0 1 0 1 0 1 0 1 0 1'''
binlist=[]
for i in range(12):
	if(i+1)%2==1:
		binlist.append(0)
	else:
		binlist.append(1)
print(binlist)
