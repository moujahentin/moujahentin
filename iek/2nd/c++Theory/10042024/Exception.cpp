#include <iostream>
#include <iomanip>

using namespace std;

double diaresi(double a, double b);

double x = 2.4;
double y = 0.0;
double z = 0.0;

int main ()
{
	try 
	{
		z = diaresi(x,y);
		cout<<x<<" / "<<y<<" = "<<setprecision(2)<<z<<"\n";
	}
	catch (const char* sfalma) 
	{
		cout<<"Kati pige strava : "<<sfalma<<"\n";
	}
	return 0;
}


double diaresi(double a, double b)
{
		if( b == 0 )
		{
			throw "Dairesi me to miden adinati \n";
		}
	return a/b;
}
