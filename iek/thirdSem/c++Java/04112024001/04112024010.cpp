#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int main(){
	srand(time(0));
	float num1,num2,num3 ;
	num1=sqrt(rand() % 101);
	num2=sqrt(rand() % 101);
	num3=sqrt(rand() % 101);
	auto sum = num1+num2+num3;
	cout<<num1<<","<<num2<<","<<num3<<endl;
	cout<<sum;
	return 0;
	}
