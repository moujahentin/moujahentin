/*3. Ένας ωρομίσθιος υπάλληλος, για κάθε ώρα που δουλεύει, πληρώνεται με
15 ευρώ. Αν το συνολικό ποσό που θα εισπράξει ξεπερνά τα 1000 ευρώ,
θα του επιβληθεί φορολογία 13%. Να δημιουργήσετε πρόγραμμα, το οποίο
να δέχεται τις ώρες που δούλεψε ο υπάλληλος μέσα σε μία εβδομάδα και
να εμφανίζει τον εβδομαδιαίο μισθό του*/

#include<iostream>
using namespace std;
int main(){
	
	int hours,moneyperhour=15,total;
	float foros=0.13;
	cout<<"Poses ores doulepses : ";
	cin>>hours;
	total=hours*moneyperhour;
	if (total<1000)
		cout<<"O misthos einai "<<total;
	else
		cout<<"O misthos einai "<<total-(total*foros);
	
	
	
	
	return 0;
	}
