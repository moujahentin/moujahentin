/*Άσκηση 7: Διαχείριση Εργαζομένων και Μισθών
Δημιουργήστε μια κλάση Employee που θα περιέχει τα εξής μέλη:
name: το όνομα του εργαζομένου (συμβολοσειρά)
salary: ο μηνιαίος μισθός του εργαζομένου (πραγματικός αριθμός)
Δημιουργήστε έναν πίνακα αντικειμένων τύπου Employee για να αποθηκεύσετε τα στοιχεία 6
εργαζομένων. Υλοποιήστε μια μέθοδο που θα υπολογίζει και θα επιστρέφει το συνολικό ετήσιο κόστος
μισθών για όλους τους εργαζόμενους.*/
#include <iostream>
#include <cstring>
class Employee{
	private:
		std::string name;
		float salary;
	public:
		Employee(){};
		Employee(std::string n,float s):name(n),salary(s){};
		float getSalary(){
			return salary;
		}
		float getAnnualSalary(){
			return salary*12;
		}
};
int main(){
	Employee employees[6];
	employees[1] = Employee("Bob White", 3000.00);
	employees[2] = Employee("Charlie Black", 2200.00);
	employees[3] = Employee("Diana Blue", 2800.00);
	employees[4] = Employee("Ethan Red", 2600.00);
	employees[5] = Employee("Fiona Yellow", 3100.00);
	float totalAnnualCost=0;
	for(int i=0;i<6;i++){
		totalAnnualCost+=employees[i].getAnnualSalary();
	}
	std::cout << "Total annual salary cost for all employees: " << totalAnnualCost << std::endl;
	return 0;
}
