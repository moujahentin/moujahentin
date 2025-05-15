
#include<iostream>
using namespace std;
float MO(int x, int y, int z);
int main()
{
    int a=3,b=7,c=21;
    float mo;
    mo=MO(a,b,c);
    cout<<"o mesos oros einai : "<<mo;



}
float MO(int x, int y, int z)
{
    float a;
    a=(x+y+z)/3.0;
    return a;
}
