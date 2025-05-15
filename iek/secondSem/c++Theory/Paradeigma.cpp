#ifdef __unix__
 #define LEITOURGIKO 1
#elif defined (WIN32) || (_WIN32)
 #define LEITOURGIKO 2
#endif

#include <iostream>

using namespace std;

void svise_othoni();

int main()
{
	svise_othoni();
	int imera;
	
	cout<<"Dose arihmo apo 1 - 7 gia imera :";
	cin>>imera;

	switch(imera)
	{
		case 1:
			cout<<"Deftera \n";
			break;
		case 2:
			cout<<"Triti \n";
			break;
		case 3:
			cout<<"Tetarti \n";
			break;
		case 4:
			cout<<"Pempti \n";
			break;
		case 5:
			cout<<"Paraskevi \n";
			break;
		case 6:
			cout<<"Savato \n";
			break;
		case 7:
			cout<<"Kyriaki \n";
			break;
		default:
			cout<<"Mi apodekti timi :"<<imera<<"\n";
			break;
	}	

	return 0;
}

void svise_othoni()
{
	if(LEITOURGIKO==1)
	{
		system("clear");
	}
	else if(LEITOURGIKO==2)
	{
		system("cls");
	}
}
