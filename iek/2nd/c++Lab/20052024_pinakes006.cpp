/*Άσκηση 6
Δημιουργήστε μια κλάση Customer που θα περιέχει τα εξής μέλη:
name: το όνομα του πελάτη (συμβολοσειρά)
balance: το υπόλοιπο του λογαριασμού του πελάτη (πραγματικός αριθμός)
Δημιουργήστε έναν πίνακα αντικειμένων τύπου Customer για να αποθηκεύσετε τα στοιχεία 5
πελατών. Υλοποιήστε μια μέθοδο που θα υπολογίζει το συνολικό υπόλοιπο όλων των λογαριασμών.*/

#include <iostream>
#include <cstring>
class Customer{
	private:
		std::string name;
		float balance;
	public:
		Customer(){};
		Customer(std::string n,float b):name(n),balance(b){};
		float getBalance(){
			return balance;
		}
		void display() {
			std::cout << "Name: " << name << ", Balance: " << balance << std::endl;
		}
};
int main(){
	Customer customers[5];
	customers[0] = Customer("John Doe", 1500.75);
	customers[1] = Customer("Jane Smith", 2500.50);
	customers[2] = Customer("Emily Johnson", 1800.20);
	customers[3] = Customer("Michael Brown", 3000.00);
	customers[4] = Customer("Jessica Williams", 1200.90);
	float totalBalance=0;
	for(int i=0;i<5;i++){
		customers[i].display();
		totalBalance+=customers[i].getBalance();
	}
	std::cout << "Total balance of all customers: " << totalBalance << std::endl;
	return 0;
}



