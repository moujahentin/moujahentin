#include <iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"Plhktrologiste 2 arithmous : ";
	
	cin>>num1>>num2;
	   if (num1 == 0 || num2 == 0) {
		cout<<"lathos dedomena"<<endl;
    } else {
        int sum = num1+num2;
        int gin = num1*num2;
        float  phl= num1/num2;

        cout << "Άθροισμα: " << sum <<endl;
        cout << "Γινόμενο: " <<gin<<endl;
        cout << "Πηλίκο: " <<phl<<endl;
    }
	
	return 0;
	}
