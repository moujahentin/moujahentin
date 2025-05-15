#include <iostream>
#include <cstring>

using namespace std;

struct  Proion
{
	char perigrafi[80];
	double timi; 
};

int main()
{
	Proion  gofreta1,gofreta2;
	
	cout<<"Dose perigrafi"<<"\n";
	cin>>gofreta1.perigrafi;
	cout<<"Dose tin timi"<<"\n";
	cin>>gofreta1.timi;

	strcpy(gofreta2.perigrafi,"Kitkat");
	gofreta2.timi = 0.74;
	
	cout<<"Perigrafi : "<<gofreta1.perigrafi<<"\n";
	cout<<"Timi : "<<gofreta1.timi<<" Euros \n";

	cout<<"Perigrafi  : "<<gofreta2.perigrafi<<"\n";
	cout<<"Timi : "<<gofreta2.timi<<" Euros \n";

	return 0;
}

