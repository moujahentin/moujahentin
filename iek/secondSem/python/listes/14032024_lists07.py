'''. Να γραφεί τμήμα προγράμματος σε Python που να δημιουργεί την παρακάτω λίστα :
512 256 128 64 32 16 8 4 2 1'''

lista=[]
for i in range(10):
	lista.append(pow(2,i))
lista.reverse()
print(lista)
