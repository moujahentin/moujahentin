#include <iostream>
using namespace std;
class Account
{
	private:
		float balance;
	public:
		Account()
		{
			balance=0;
		}
		Account (float balance1)
		{
			balance=balance1;
		}
		void withdraw(float money)
		{
			if (money<=balance)
				balance=balance-money;
			else
				cout<<"To poso ypervainei to trexon!"<<endl;
		}
		void deposit(float money)
		{
			balance+=money;
		}
		float getBalance()
		{
			return balance;
		}
		void addBalance(Account x,Account y)
		{
			balance=x.balance+y.balance;	
		}
};
int main()
{
	Account ac1(100.0), ac2(70.0), ac3;
	ac3.addBalance(ac1, ac2);
	cout << "Τρέχον ποσό λογαριασμού ac1:" << ac1.getBalance() << endl;
	cout << "Τρέχον ποσό λογαριασμού ac2:" << ac2.getBalance() << endl;
	cout << "Συνολικό ποσό λογαριασμών:" << ac3.getBalance() << endl;	
}
