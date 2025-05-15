#include <iostream>
using namespace std;
class Account
{
	private:
		static int count;
		float balance;
	public:
		Account()
		{
			balance=0;
			count++;
		}
		Account (float balance1)
		{
			count++;
			balance=balance1;
		}
		int getCount()
		{
			return count;
		}
		void withdraw(float money)
		{
			if (money<=balance)
				balance=balance-money;
			else
				cout<<"To poso analipsis ypervainei to trexon!"<<endl;
		}
		void deposit(float money)
		{
			balance+=money;
		}
		float getBalance()
		{
			return balance;
		}
		Account sumBalance(Account ac)
		{
			Account temp;
			temp.balance=balance+ac.balance;
			return temp;
		}
};
int Account::count=0;
int main()
{
	Account ac1(100.0), ac2(70.0), ac3;
	ac3=ac1.sumBalance(ac2);
	cout << "Τρέχον ποσό λογαριασμού ac1:" << ac1.getBalance() << endl;
	cout << "Τρέχον ποσό λογαριασμού ac2:" << ac2.getBalance() << endl;
	cout << "Συνολικό ποσό λογαριασμών:" << ac3.getBalance() << endl;	
	cout << "Αριθμόςπελατών:"<<ac1.getCount() << endl;
	cout << "Αριθμόςπελατών:"<<ac2.getCount() << endl;
	cout << "Αριθμόςπελατών:"<<ac3.getCount() << endl;
	return 0; 
}
