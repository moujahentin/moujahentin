#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float num1,num2,mo;
	cout<<"dwse 2 dekadikous : ";
	cin>>num1>>num2;
	mo=(num1+num2)/2;
	cout<<fixed<<setprecision(2);
	cout<<"mo = "<<setw(7)<<mo;
	
	return 0;
	}
