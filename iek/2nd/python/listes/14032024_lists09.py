'''9. Στο τμήμα πληροφορικής εισήχθησαν με το σύστημα των πανελλαδικών εξετάσεων 120
φοιτητές. Να αναπτύξετε πρόγραμμα σε Python που :
• Για κάθε έναν φοιτητή, θα διαβάζει το όνομα και τα μόρια που συγκέντρωσε από τις
πανελλήνιες εξετάσεις και θα τα καταχωρίζει στις λίστες ΟΝ και ΜΟ, αντίστοιχα.
• Να εκτυπώνει τα ονόματα των φοιτητών και δίπλα τα μόρια τους, ταξινομημένα με βάση τα
μόρια, κατά φθίνουσα σειρά. Σε περίπτωση που βρεθούν φοιτητές με ίδια μόρια, η σειρά
ταξινόμησης των ονομάτων να είναι αλφαβητική.'''

N=5
ON=[]
MO=[]
MOFT=[]

for i in range(N):
	ON.append(input("Dwse onoma foititi : "))
	MO.append(float(input("Dwse moria foititi : ")))
for i in range(len(MO)):
	MOFT.append(MO[i])
MOFT.sort()
MOFT.reverse()
for moria in MOFT:
	if moria in MO:
		print(ON[MO.index(moria)],end=" : ")
		print(moria)
		MO.insert(MO.index(moria), 0)
		MO.pop(MO.index(moria))

