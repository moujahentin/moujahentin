#include <iostream>
using namespace std;
class Account
{
	private:
	float balance;
	public:
	Account()
	{
		balance = 0;
	}	
	void withdraw(float money)
	{
		if(money<=balance)
			balance=balance-money;
		else
			cout<<"To poso analipsis ypervainei to trexon"<<endl;
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
	Account ac;
	ac.deposit(100.0);
	cout<<"Trexon poso logariasmou : "<<ac.getBalance()<<endl;
	ac.withdraw(70.0);
	cout<<"Trexon poso logariasmou : "<<ac.getBalance()<<endl;
}
