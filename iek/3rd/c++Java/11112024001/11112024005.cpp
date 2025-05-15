/*    5) Μια εταιρεία κινητής τηλεφωνίας χρεώνει τα SMS σύμφωνα με την παρακάτω κλιμακωτή χρέωση:
Πλήθος SMS
Τιμή ανά SMS 
Τα πρώτα 10 
2 λεπτά 
Τα επόμενα 50 
1,5 λεπτά 
Τα επόμενα 100
1,2 λεπτά
Όλα τα επόμενα
1 λεπτό
το οποίο να ζητάει να πληκτρολογήσουμε το πλήθος των SMS που στείλαμε και κατόπιν να υπολογίζει και να εμφανίζει σε ευρώ το ποσό που πρέπει να πληρώσουμε. */

#include <iostream>
using namespace std;
int main(){
	int count;
	float total;
	cout<<"Dwse plithos SMS : ";
	cin>>count;
	if(count<11){
		total=count*0.02;
		}
	else if(count<61){
		total=0.2+(count-10)*0.015;
		}
	else if (count<161){
		total=0.2+(50*0.015)+(count-60)*0.012;
		}
	else
		total=0.2+(50*0.015)+(100*0.012)+(count-160)*0.01;
	cout<<"Synoliki timi "<<total;
	return 0;
	}
