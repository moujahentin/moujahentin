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
		Account(float balance1)
		{
			balance=balance1;
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
};
int main()
{
	Account ac1, ac2(50.0), ac3(100.0);
	cout << "Τρέχον ποσό λογαριασμού ac1:" << ac1.getBalance() << endl;
	cout << "Τρέχον ποσό λογαριασμού ac2:" << ac2.getBalance() << endl;
	cout << "Τρέχον ποσό λογαριασμού ac3:" << ac3.getBalance() << endl;
}

