#include<iostream>
using namespace std;
int athroisma(int x,int y);
int main()
{
    int a,b,c;
    cout<<"dwse ton 1o arithmo : ";
    cin>>a;
    cout<<"dwse ton 2o arithmo : ";
    cin>>b;
    c=athroisma(a,b);
    cout<<"to athroisma tou "<<a<<" kai "<<b<<" einai : "<<c;


    return 0;
}
int athroisma(int x, int y)
{
    int z;
    z=x+y;
    return z;
}
