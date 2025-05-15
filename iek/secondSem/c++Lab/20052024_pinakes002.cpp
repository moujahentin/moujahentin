/*Άσκηση 2: Διαχείριση Προϊόντων σε Κατάστημα
Δημιουργήστε μια κλάση `Product` που θα περιέχει τα εξής μέλη:
- `name`: το όνομα του προϊόντος (συμβολοσειρά)
- `price`: η τιμή του προϊόντος (πραγματικός αριθμός)
- `quantity`: η ποσότητα του προϊόντος στο απόθεμα (ακέραιος αριθμός)
Δημιουργήστε έναν πίνακα αντικειμένων τύπου `Product` για να αποθηκεύσετε τα στοιχεία 10
προϊόντων σε ένα κατάστημα. Υλοποιήστε μια μέθοδο που να επιστρέφει το συνολικό κόστος όλων
των προϊόντων στο απόθεμα.*/

#include <iostream>
#include <cstring>

class Product{
	private:
		std::string name;
		float price;
		int quantity;
	public:
		Product(){}
		Product(std::string n, float p, int q):name(n),price(p),quantity(q){}
		
		float getTotalCost(){
			return price*quantity;	
		}	
};
int main(){
	Product products[10];
	products[0] = Product("Γάλα", 1.5, 30);
	products[1] = Product("Ψωμί", 0.8, 50);
	products[2] = Product("Τυρί", 3.2, 20);
	products[3] = Product("Ζάχαρη", 0.9, 40);
	products[4] = Product("Καφές", 5.0, 15);
	products[5] = Product("Μήλα", 2.0, 25);
	products[6] = Product("Νερό", 0.5, 60);
	products[7] = Product("Σοκολάτα", 1.2, 35);
	products[8] = Product("Βούτυρο", 2.5, 10);
	products[9] = Product("Κρασί", 10.0, 5);
	float totalCost=0.0;
	for(int i=0; i<10; i++){
		totalCost+=products[i].getTotalCost();			
	}
	std::cout << "Το συνολικό κόστος όλων των προϊόντων στο απόθεμα είναι: " << totalCost << " ευρώ" <<std::endl;
	return 0;
}
