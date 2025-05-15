#ifdef __unix__
	#define LEITOURGIKO 1
#elif defined (WIN32) || (_WIN32)
	#define LEITOURGIKO 2
#endif

#include <iostream>		
using namespace std;	

void svise_othoni();
void propaidiaApoEos(int buff_min,int buff_max);  
void propaidiatou(int buff);					

int main()
{
	int num; 
	int min,max;
	svise_othoni();
	cout<<"Dwse enan akeraio arithmo:";
	cin>>num;
	svise_othoni();
	propaidiatou(num);
	cout<<"Dwse to katwtato orio (akeraios):";
	cin>>min;
	cout<<"Dwse to anotato orio (akeraios):";
	cin>>max;
	if(min<=max)
	{
		svise_othoni();
		propaidiaApoEos(min,max);
	}
	else
	{	
	cout<<"Mi apodekta oria \a\n";
	}
	return 0;
}
void propaidiatou(int buff)
{
	cout<<"Propaidia tou :"<<buff<<"\n";
	for(int counter=0; counter<=10; counter++)
	{
		cout<<counter<<"*"<<buff<<"="<<counter*buff<<"\n";
	}
}

void propaidiaApoEos(int buff_min,int buff_max)
{
	for (int counter=buff_min; counter<=buff_max; counter++)
	{
		propaidiatou(counter);
	}
}

void svise_othoni()
{
	if(LEITOURGIKO == 1)
	{
		system("clear");
	}
	else if(LEITOURGIKO == 2)
	{
		system("cls");
	}
}
