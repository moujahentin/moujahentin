/*Άσκηση 4
Άσκηση 2: Διαχείριση Πωλήσεων Εταιρείας
Δημιουργήστε μια κλάση Sale που θα περιέχει τα εξής μέλη:
product: το όνομα του προϊόντος (συμβολοσειρά)
quantity: η ποσότητα που πουλήθηκε (ακέραιος αριθμός)
price: η τιμή ανά μονάδα (πραγματικός αριθμός)
Δημιουργήστε έναν πίνακα αντικειμένων τύπου Sale για να αποθηκεύσετε τα στοιχεία 12 πωλήσεων.
Υλοποιήστε μια μέθοδο που θα επιστρέφει το συνολικό έσοδο για ένα συγκεκριμένο προϊόν.*/
#include <iostream>
#include <cstring>

class Sale{
	private:
		std::string product;
		int quantity;
		float price;
	public:
		Sale(){}
		Sale(std::string pr,int q,float p):product(pr),quantity(q),price(p){}
		float getRevenue(){
			return quantity*price;
		}
		std::string getProduct() {
			return product;
		}
};
int main(){
	Sale sales[12];
	sales[0] = Sale("Product1", 100, 5.5);
	sales[1] = Sale("Product2", 200, 3.0);
	sales[2] = Sale("Product3", 150, 7.5);
	sales[3] = Sale("Product1", 80, 5.5);
	sales[4] = Sale("Product2", 50, 3.0);
	sales[5] = Sale("Product4", 300, 2.5);
	sales[6] = Sale("Product3", 120, 7.5);
	sales[7] = Sale("Product1", 60, 5.5);
	sales[8] = Sale("Product5", 70, 4.0);
	sales[9] = Sale("Product4", 200, 2.5);
	sales[10] = Sale("Product2", 100, 3.0);
	sales[11] = Sale("Product5", 90, 4.0);
	std::string targetProduct;
	std::cout<<"Enter the product name: ";
	std::cin>>targetProduct;
	float totalRevenue=0.0;
	for (int i=0; i<12;i++){
		if(sales[i].getProduct()==targetProduct){
			totalRevenue+=sales[i].getRevenue();
		}
	}
	std::cout << "Total revenue for " << targetProduct << " is: " << totalRevenue << " euros" << std::endl;
	return 0;	
}
