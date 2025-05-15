#include <iostream>

using namespace std;

const int megethosX = 10;
int pinakasX[megethosX];

int main()
{	
	cout<<"O Pinakas X exei "<< megethosX<<" theseis \n";
	cout<<"Gemizw ton Pinaka  X \n";
	for(int counter=0; counter<10; counter++)
	{
		pinakasX[counter] = counter;
	}
	
	cout<<"Emfanisi Pinaka X \n";
	cout<<"O Pinakas X einai apothikeumenos stin diefthinsi mnimis :"<<&pinakasX<<"\n";
	for(int counter=0; counter<10; counter++)
	{
			cout<<"I diefthnsi :"<<&pinakasX[counter]<<" exei timi "<<pinakasX[counter]<<"\n";
	}	
	return 0;
}
