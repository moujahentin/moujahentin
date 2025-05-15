#include <iostream>
using namespace std;

int *arithmos_a,*arithmos_b,*apotelesma;

int main()
{
	arithmos_a = new int();
	arithmos_b = new int();
	apotelesma = new int();	
	cout<<"Protos \n";
	cin>>*arithmos_a;
	cout<<"Defteros \n";
	cin>>*arithmos_b;
	*apotelesma = *arithmos_a+*arithmos_b;
	cout<<"O arithmos a exei timi : "<<*arithmos_a<<"\n";
	cout<<"O arithmos a vrisketai sti thesi : "<<&arithmos_a<<"\n";
	cout<<"O arithmos a vrisketai sti thesi : "<<*&arithmos_a<<"\n";
	

	cout<<"O arithmos b exei timi:"<<*arithmos_b<<"\n";
	cout<<"O arithmos b vrisketai sti thesi : "<<&arithmos_b<<"\n";
	
	cout<<*arithmos_a<<"+"<<*arithmos_b<<"="<<*apotelesma<<"\n";
	
	cout<<"To apotelesma exei timi : "<<*apotelesma<<"\n";
	cout<<"To apotelesma vrisketai sti thesi : "<<&apotelesma<<"\n";

	delete arithmos_a;
	delete arithmos_b;
	delete apotelesma;
	return 0;
}
