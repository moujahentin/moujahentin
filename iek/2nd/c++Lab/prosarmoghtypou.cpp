
#include<iostream>
using namespace std;
int main()
{
    int x=25000;
    x=(x*10/10);
    cout<<"x="<<x<<endl;
    x=25000;
    x=(long(x)*10)/10;
    cout<<"x="<<x<<endl;
    return 0;
}
