#include "onoma.h"
#include <iostream>

#ifdef __unix__
    #define LEITOURGIKO 1
#elif defined(_WIN32) || defined(WIN32)
    #define LEITOURGIKO 2
#endif


void svise_othoni();


using namespace std;
int main()
{
	svise_othoni();
	Onoma christianakis;
	christianakis=Onoma("Chris","Christianakis");
	cout<<"Onoma :"<<christianakis.getFname()<<"\n";
	cout<<"Epitheto :"<<christianakis.getLname()<<"\n";
	
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
