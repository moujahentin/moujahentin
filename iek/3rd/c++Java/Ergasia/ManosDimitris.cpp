# include <iostream>
using namespace std;
int main(){
	cout<<"Εκτύπωση των πρώτων 10 αριθμών της ακολουθίας Fibonacci.\n";
	int n1=0,n2=1,n3;
	cout<<n1<<","<<n2;
	for(int i=0;i<10;i++){
		n3=n1+n2;
		cout<<","<<n3;
		n1=n2;
		n2=n3;
		}
	return 0;
	}
