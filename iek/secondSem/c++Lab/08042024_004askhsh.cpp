/*Να δημιουργήσετε μια κλάση με το όνομα "Date" που θα έχει τα εξής
χαρακτηριστικά:
Ημέρα (day)
Μήνας (month)
Έτος (year)
Η κλάση θα πρέπει να διαθέτει έναν constructor που θα δέχεται την ημέρα, το
μήνα και το έτος και θα αρχικοποιεί τα αντίστοιχα χαρακτηριστικά. Επίσης, πρέπει
να παρέχει μία μέθοδο για την εμφάνιση της ημερομηνίας σε μορφή
"ΗΗ/ΜΜ/ΕΕΕΕ".*/

#include <iostream>
#include <cstring>
using namespace std;

class Date
{
	private:
		int day,month,year;
	public:
		Date()=default;
		Date(int day1,int month1,int year1)
		{
			day=day1;
			month=month1;
			year=year1;
		}
		void printInfo()
		{
			cout<<day<<"/"<<month<<"/"<<year;
		}
};
int main()
{
	Date date1(8,4,2024);
	date1.printInfo();	
	return 0;
}
