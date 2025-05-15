#include <iostream>
#include <cstring>
using namespace std;

struct Allien
{
	int eyes;
	char name[50];
};



int main()
{
	Allien allien1,allien2;
	cout<<"Dose onoma eksoghinou : "<<endl;
	cin>>allien1.name;
	cout<<"Posa matia ehei : "<<endl;
	cin>>allien1.eyes;
	
	strcpy(allien2.name, "E.T");
	allien2.eyes=5;
	cout<<"Onoma eksoghinou : "<<allien1.name<<endl;
	cout<<"Matia : "<<allien1.eyes<<endl;
	cout<<"Onoma eksoghinou : "<<allien2.name<<endl;
	cout<<"Matia : "<<allien2.eyes<<endl;
	return 0;
}
