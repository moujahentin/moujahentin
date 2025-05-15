/*8. Σε αυτό το παράδειγμα, θα ζητήσουμε από τον χρήστη να εισαγάγει έναν
αριθμό και θα επαναλαμβάνουμε την ερώτηση μέχρι να εισαχθεί ένας
θετικός αριθμός:*/

#include<iostream>
using namespace std;
int main(){
	int number;
	do {cout<<"Dose enan akeraio : ";
	   cin>>number;}
	while(number<0);
	return 0;
	}
