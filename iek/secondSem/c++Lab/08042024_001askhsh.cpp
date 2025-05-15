/*Να δημιουργήσετε μια κλάση με το όνομα "Car" που θα έχει τα εξής
χαρακτηριστικά:
Μάρκα (brand)
Μοντέλο (model)
Έτος κυκλοφορίας (year)
Η κλάση θα πρέπει να διαθέτει έναν constructor που θα δέχεται τις παραπάνω
πληροφορίες και θα αρχικοποιεί τα αντίστοιχα χαρακτηριστικά. Επίσης, πρέπει να
παρέχει μια μέθοδο με το όνομα "displayDetails" που θα εμφανίζει τις
λεπτομέρειες του αυτοκινήτου (μάρκα, μοντέλο, έτος κυκλοφορίας).*/
#include <iostream>
#include <cstring>
using namespace std;
class Car
{
	private:
	string brand;
	string model;
	int year;
	public:
	Car()=default;
	Car(string brandCar, string modelCar, int yearCar)
	{
		brand=brandCar;
		model=modelCar;
		year=yearCar;
	}
	void dispayDetails()
	{
		cout<<"Brand : "<<brand<<endl;
		cout<<"Model : "<<model<<endl;
		cout<<"Year  : "<<year<<endl;
	}
};
int main()
{
	Car car1("KIA", "SHUMA",1999);
	car1.dispayDetails();
	return 0;
}
