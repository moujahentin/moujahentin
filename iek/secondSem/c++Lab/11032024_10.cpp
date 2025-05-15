/*10. Να δημιουργήσετε πρόγραμμα, το οποίο να διαβάζει 15 ονόματα και
να τα αποθηκεύει σε έναν πίνακα. Στη συνέχεια, να ζητά από τον χρήστη
να δώσει έναν αριθμό από το 0 μέχρι το 14 και να επιστρέφει το όνομα
που βρίσκεται στη θέση αυτή.*/

#include<iostream>
#include<string>
using namespace std;
int main(){
	int number;
	string  A[15];
	for(int i=0; i<15; i++){
		cout<<"dwse ena onoma : ";
		cin>>A[i];
		}
	cout<<"Dwse enan noumero apo to 0 os to 14 : ";
	cin>>number;
	cout<<A[number]; 
	
	return 0;
	}
