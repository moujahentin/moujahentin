/*Να γραφεί ένα πρόγραμμα το οποίο σε κάθε γραμμή της οθόνης να εμφανίζει διαφορετικό πλήθος από αστερίσκους. Η πρώτη 1, η δεύτερη 2, κ.ο.κ. Το πρόγραμμα θα πρέπει να χρησιμοποιεί επαναληπτική διαδικασία.*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Number :" ;
	cin>>n;
	for(int i=1;i<=n;i++){
		for (int j=0;j<i;j++){
			cout<<"*";
			}
		cout<<endl;
		}
	return 0;
	}
