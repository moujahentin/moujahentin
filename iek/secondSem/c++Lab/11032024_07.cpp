/*7. Να γραφεί πρόγραμμα που θα ζητάει από τον χρήστη να εισάγει ακέραιους
αριθμούς μέχρις ότου εισάγει μηδέν, και στη συνέχεια θα υπολογίσουμε
το άθροισμα των αριθμών που εισήχθησαν.*/

#include<iostream>
using namespace std;
int main(){
	int number,sum=0;
	cout<<"Dwse enan akeraio : ";
	cin>>number;
	while(number!=0){
		sum+=number;
		cout<<"Dwse enan akeraio : ";
		cin>>number;
		}
	cout<<"To athroisma einai : "<<sum;
	return 0;
	}
