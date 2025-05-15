/*Παράδειγμα 2: Να δημιουργηθεί μια γενική κλάση Vehicle, η οποία να έχει ένα
προστατευμένο πεδίο brand. Να δημιουργηθούν δύο κλάσεις κληρονομικές από
την Vehicle: Car και Bike. Κάθε κλάση πρέπει να παρέχει μια δημόσια μέθοδο
drive(), η οποία απλά να εμφανίζει ένα μήνυμα που αντιπροσωπεύει το γεγονός
ότι το όχημα κινείται.*/

#include <iostream>
#include <cstring>
using namespace std;

class Vehicle
{
	protected :
		string brand;
	public:
		Vehicle()=default;
		Vehicle(string brand1)
		{
			brand=brand1;
		}
};
class Car:public Vehicle
{
	public:
		Car(string brand1):Vehicle(brand1){}
		void drive()
		{
			cout<<"to autokinito pataei gkazi"<<endl;
		}
};
class Bike:public Vehicle
{
	public:
		Bike(string brand1):Vehicle(brand1){}
		void drive()
		{
			cout<<"To podhlato kanei petali"<<endl;
		}
};
int main()
{
	Car car1("KIA");
	car1.drive();
	Bike bike1("BMX");
	bike1.drive();
	return 0;
}
