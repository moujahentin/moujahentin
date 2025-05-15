#include <iostream>
using namespace std;
class Person
{
	private:
	char name[30];
	int age;
	public:
	void readData()	
	{
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter age: ";
			cin>>age;		
	}
	void printData()
	{
		cout<<"THe name of the person is "<<name<<endl;
		cout<<"The age of the person is "<<age<<endl;
	}
};   //telos klasis
int main()
{
	Person p1,p2;	//dilodi 2 antikeimenon
	
	p1.readData();	//klisi synartisis-melous gia orismo dedomenon
	p1.printData();	//klisi synartisis-melous gia emfanisi dedomenon
	p2.readData();
	p2.printData();	
}
