/*Ο όγκος ενός κυλίνδρου δίνεται από τον τύπο 𝑉 = ℎ ∗ 𝜋 ∗ 𝑅 2 . Να
δημιουργήσετε πρόγραμμα, το οποίο να δέχεται το ύψος (h) και την ακτίνα
(R) του κυλίνδρου και να τυπώνει τον όγκο (V).*/


#include<iostream>
#define pi 3.14159
using namespace std;

int main(){
	float h,R,V; 
	cout<<"Dwse ipsos kykloy : ";
	cin>>h;
	cout<<"Dwse aktina kyklou : ";
	cin>>R;
	V=h*pi*(R*R);
cout<<"O ogkos tou kykloy einai : "<<V;
return 0;
}
