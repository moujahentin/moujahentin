#define SAEK  "DIMOSIO SAEK KOUFALIWN"
#include <iostream>
#include <string>

#ifdef __unix__
    #define LEITOURGIKO 1
#elif defined(_WIN32) || defined(WIN32)
    #define LEITOURGIKO 2
#endif

using namespace std;

void svise_othoni();

int main()
{
	double protos;
	float  defteros;
	string simvoloseira;
	svise_othoni();
	cout<<"Kalosirthate sto "<<SAEK<<"\n";
	cout<<"Eisagetai proto dekadiko: \n";
	cin>>protos;
	cout<<"Eisagete deftero dekadiko: \n";
	cin>>defteros;
	cout << "Eisagetai mia simvoloseira :\n";
	cin.ignore();
	getline(cin,simvoloseira);
	cout<<"Protos arithmos : "<<protos <<"\n";
	cout<<"Defteros arithmos : "<<defteros<<"\n";
	cout<<"Simvoloseira : "<<simvoloseira<<"\n";
	return 0;
}

void svise_othoni()
{
	if(LEITOURGIKO==1)
	{
		system("clear");
	}
	else if(LEITOURGIKO == 2)
	{
		system("cls");
	}
}




