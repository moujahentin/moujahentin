/*Να δημιουργήσετε μια κλάση με το όνομα "BankAccount" που θα έχει τα εξής
χαρακτηριστικά:
Όνομα Ιδιοκτήτη (ownerName)
Υπόλοιπο (balance)
Η κλάση θα πρέπει να διαθέτει έναν constructor που θα δέχεται το όνομα του
ιδιοκτήτη και το αρχικό υπόλοιπο και θα αρχικοποιεί τα αντίστοιχα
χαρακτηριστικά. Επίσης, πρέπει να παρέχει μεθόδους για κατάθεση και ανάληψη
χρημάτων, καθώς επίσης και μία μέθοδο για την εμφάνιση λεπτομερειών του
λογαριασμού (όνομα ιδιοκτήτη και υπόλοιπο).*/

#include <iostream>
#include <cstring>
using namespace std;

class BankAccount
{
	private:
		string ownerName;
		float balance;
		
	public:
		BankAccount()=default;
		BankAccount(string accountOwnerName, float accountBalance)
		{
			ownerName=accountOwnerName;
			balance=accountBalance;
		}
		float deposit(float newBalance)
		{
			balance+=newBalance;
			return balance;
		}
		float withdraw(float newBalance)
		{
			balance-=newBalance;
			return balance;
		}
		void printInfo()
		{
			cout<<"Owner Name : "<<ownerName<<endl;
			cout<<"Account Balance : "<<balance<<endl;
		}
};

int main()
{
	BankAccount acc1("Moujahentin", 100);
	acc1.printInfo();
	acc1.deposit(150);
	acc1.printInfo();
	acc1.withdraw(50);
	acc1.printInfo();
	return 0;
}
