/*    3) Να γραφεί ένα πρόγραμμα το οποίο χρησιμοποιώντας την εντολή switch να δέχεται ένα χαρακτήρα και να εκτελεί την αντίστοιχη ενέργεια. 
h-> Να εμφανίζει τη λέξη “hello”.
2-> Να εμφανίζει τον αριθμό 2.
b-> Να εμφανίζει “bye bye”. */
#include <iostream>
using namespace std;
int main(){
	char c;
	cout<<"Dwse charactira : ";
	cin>>c;
	switch (c){
		case 'h':
			cout<<"Hello!!!";
			break;
		case '2':
			cout<<"2";
			break;
		case 'b':
			cout<<"bye bye";
			break;
		default:
			cout<<"Next time try  h,2 or b";
		}
	
	return 0;
	}
