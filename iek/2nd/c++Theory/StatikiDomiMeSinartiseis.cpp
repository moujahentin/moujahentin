#include <iostream>
#include <cstring>

using namespace std;

struct  Proion
{
	char perigrafi[80];
	double timi; 
};

void thesePeigrafi(Proion &proion, char buffer[80]);
char * parePerigrafi(Proion &proion);
void theseKostos(Proion &proion, double buffer);
double pareKostos(Proion &proion);
void ektiposeProion(Proion &proion);

int main()
{
	Proion  gofreta1,gofreta2;
	
	thesePeigrafi(gofreta1,"3BIT");
	theseKostos(gofreta1,0.94);
	
	thesePeigrafi(gofreta2,"KitKat");
	theseKostos(gofreta2,0.74);
	
	ektiposeProion(gofreta1);
	ektiposeProion(gofreta2);
	
	return 0;
}

void thesePeigrafi(Proion &proion, char buffer[80])
{
	strcpy(proion.perigrafi,buffer);
}

char * parePerigrafi(Proion &proion)
{
	return proion.perigrafi;
}

void theseKostos(Proion &proion, double buffer)
{
	proion.timi = buffer;
}

double pareKostos(Proion &proion)
{
	return proion.timi;
}

void ektiposeProion(Proion &proion)
{
	cout<<"Peigrafi : "<<parePerigrafi(proion)<<"\n";
	cout<<"Timi : "<<pareKostos(proion)<<" Euros \n";
}
