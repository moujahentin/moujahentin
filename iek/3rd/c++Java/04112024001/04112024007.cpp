#include <iostream>
using namespace std;
int main(){
	int num1,num2,num3,max,sec_max;
	cout<<"Δώσε τον πρώτο βαθμό:";
	cin>>num1;
	cout<<"Δώσε το δεύτερο βαθμό:";
	cin>>num2;
	cout<<"Δώσε τον τρίτο βαθμό:";
	cin>>num3;
	  if (num1 >= num2 && num1 >= num3) {
        max = num1;
        sec_max = (num2 >= num3) ? num2 : num3;
    } else if (num2 >= num1 && num2 >= num3) {
        max = num2;
        sec_max = (num1 >= num3) ? num1 : num3;
    } else {
        max = num3;
        sec_max = (num1 >= num2) ? num1 : num2;
    }
	
	float mo=(max+sec_max)/2;
	cout<<"O mesos oros einai :"<<mo;
	
	
	return 0;
	}
