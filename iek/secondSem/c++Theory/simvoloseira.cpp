#include <iostream>
#include <string>

#ifdef __unix__
    #define LEITOURGIKO 1
#elif defined(_WIN32) || defined(WIN32)
    #define LEITOURGIKO 2
#endif

void svise_othoni();
void rithmise_roi();


using namespace std;

int main()
{
	string s1,s2,s3;

	cout<<"Eisagwgi Protis Simvoloseiras \n";
	rithmise_roi();
	getline(cin,s1);
	cout<<"Eisagwgi Defteris Simvoloseiras \n";
	rithmise_roi();
	getline(cin,s2);
	cout<<"Eisagwgi Tritis Simvoloseiras \n";
	rithmise_roi();
	getline(cin,s3);
	cout<<"Proti   : "<<s1<<"\n";
	cout<<"Defteri : "<<s2<<"\n";
	cout<<"Triti   : "<<s3<<"\n";
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

void rithmise_roi()
{
	if(LEITOURGIKO==1)
	{
		cin.ignore(-1,' ');
	}
	else if(LEITOURGIKO == 2)
	{
		cin.ignore(0);
	}
}
