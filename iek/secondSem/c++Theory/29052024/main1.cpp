#include "Div.h"
#include <iostream>

using namespace std;
double diairesi(double a1,double a2);
double apotelesma,arithmos1,arithmos2;
int main(){

	system("clear");
try
{
cout<<"Proto arithmos \n";
cin>>arithmos1;
cout<<"Deuteros arithmos \n";
cin>>arithmos2;
apotelesma=diairesi(arithmos1,arithmos2);
cout<<arithmos1<<"/"<<arithmos2<<"="<<apotelesma<<"\n";
}

catch(Div SFALMA )
{
cout<<"kati pige strava : "<<SFALMA.ti_pige_strava()<<"\n";
}

return 0;
}

double diairesi(double a1,double a2)
{
	double apot =0.0;
	if(a2==0)
		{
		throw Div();
		}
	else
		{
		apot=a1/a2;
		}
	return apot;
}
