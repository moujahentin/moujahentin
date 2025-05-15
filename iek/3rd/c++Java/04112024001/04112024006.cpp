#include <iostream>
using namespace std;

int main(){
	int num1,num2,num3;
	cout<<"Δώσε τον πρώτο αριθμό:";
	cin>>num1;
	cout<<"Δώσε το δεύτερο αριθμό:";
	cin>>num2;
	cout<<"Δώσε τον τρίτο αριθμό:";
	cin>>num3;
	
	cout<<"Το άθροισμα των "<<num1<<" ,"<<num2<<" ,"<<num3<<" είναι "<<num1+num2+num3<<"."<<endl;
	cout<<"Το γινόμενο των "<<num1<<" ,"<<num2<<" ,"<<num3<<" είναι "<<num1*num2*num3<<"."<<endl;
	cout<<"Ο μέσος όρος των "<<num1<<" ,"<<num2<<" ,"<<num3<<" είναι "<<(num1+num2+num3)/3<<".";
	
	return 0;
	}
