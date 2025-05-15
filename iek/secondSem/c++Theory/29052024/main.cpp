#include "DiairesiMeMiden.h"
#include <iostream>
using namespace std;

double diairesi(double a_buff,double b_buff);

double a,b,apotelesma;
int main()
{
	cout<<"Dwse ton proto arithmo \n";
	cin>>a;
	cout<<"Dwse ton deftero arithmo \n";
	cin>>b;
	try
	{
		apotelesma = diairesi(a,b);
		cout<<apotelesma<<"\n";
	}catch(DiairesiMeMiden SFALMA)
	{
			cout<<"Kati pige strava :"<<SFALMA.ti_pige_strava()<<"\n";
	}
	return 0;
}

double diairesi(double a_buff,double b_buff)
{
	double apotelesma = 0.0;
	if(b_buff == 0)
	{
		throw DiairesiMeMiden();
	}
	else
	{
		apotelesma = a_buff / b_buff;
	}
	return apotelesma;
}
