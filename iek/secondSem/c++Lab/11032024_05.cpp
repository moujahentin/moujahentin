/*5. Σας δίνεται ο πιο κάτω πίνακας που περιλαμβάνει τον κωδικό και την τιμή
ενός προϊόντος.
* kodikos proiontos -timi
* 1- 4.00
* 2.3.4-4.50
* 5.10.15-5.00
* 7.9-2.00
* 12-1.50
Να δημιουργήσετε πρόγραμμα, το οποίο να δέχεται τον κωδικό (code) και
την ποσότητα ενός προϊόντος (qty) και να τυπώνει το συνολικό ποσό
(total), με ακρίβεια δύο δεκαδικών ψηφίων.*/


#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int code;
	float qty,price,total;
	
	cout<<"Dose kodiko proiontos : ";
	cin>>code;
	cout<<"Dose posotita : ";
	cin>>qty;
	switch(code){
		case 1:
		price=4.00;
		break;
		case 2:
		case 3:
		case 4:
		price=4.50;
		break;
		case 5:
		case 10:
		case 15:
		price=5.00;
		break;
		case 7:
		case 9:
		price=2.00;
		break;
		case 12:
		price=1.50;
		break;
		default:
		cout<<"Lathos kodikos";
		}
	total=qty*price;
	cout<<"H teliki timi einai "<<fixed<<setprecision(2)<<total;
	return 0;
	}
