#include<iostream>
using namespace std;
int main()
{
    float radius,perim,area;
    const float PI=3.14159;

    cout<<"Dwse aktina kyklou : ";
    cin>>radius;
    perim=2*PI*radius;
    area=PI*radius*radius;
    cout<<"perimetros : "<<perim<<endl;
    cout<<"emvadon : "<<area<<endl;

    return 0;
}
