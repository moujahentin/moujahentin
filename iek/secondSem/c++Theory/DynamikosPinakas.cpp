#include <iostream>

using namespace std;

int *pinakasY; 
int  megethosY;

int main()
{	
	pinakasY = new int();
	cout<<"Dwse to megethos tou pinaka"<<"\n";
	cin>>megethosY;
	
	if(megethosY>0)
	{
		pinakasY = new int[megethosY];
		cout<<"O Pinakas Y exei "<< megethosY<<" theseis \n";
		cout<<"Gemizw ton Pinaka Y \n";
		for(int counter=0; counter<megethosY; counter++)
		{
			pinakasY[counter] = counter;
		}
	
		cout<<"Emfanisi Pinaka Y \n";
		cout<<"O Pinakas Y einai apothikeumenos stin diefthinsi mnimis :"<<pinakasY<<"\n";
		for(int counter=0; counter<megethosY; counter++)
		{
			cout<<"I diefthnsi :"<<&pinakasY[counter]<<" exei timi "<<pinakasY[counter]<<"\n";
		}
	
		delete[] pinakasY;
	}
	else
	{
		cout<<megethosY<<" Mi apodekti timi"<<"\n";
	}
	return 0;
}
