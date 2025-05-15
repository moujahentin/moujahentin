#include<iostream>
using namespace std;
void athroisma(int x,int y);
int main()
{
    int a,b,c;
    cout<<"dwse ton 1o arithmo : ";
    cin>>a;
    cout<<"dwse ton 2o arithmo : ";
    cin>>b;
    athroisma(a,b);



    return 0;
}
void athroisma(int x, int y)
{
    int z;
    z=x+y;
    cout<<"to athroisma tou "<<x<<" kai "<<y<<" einai : "<<z;
}
