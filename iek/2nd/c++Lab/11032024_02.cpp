/*2. O ΦΠΑ για τα προϊόντα πολυτελείας είναι 23% της αρχικής τιμής. Να
δημιουργήσετε πρόγραμμα, το οποίο να δέχεται το αρχικό ποσό και να
τυπώνει την τελική τιμή με ακρίβεια 2 δεκαδικών ψηφίων.*/



#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	const float fpa=0.23;
	float cost,teliki;
	cout<<"Dwse arxiki timi : "; 
	cin>>cost;
	teliki=(cost*fpa)+cost;
	cout<<"H telikh timh einai "<<fixed<<setprecision(2)<<teliki ;
	return 0;
	}
