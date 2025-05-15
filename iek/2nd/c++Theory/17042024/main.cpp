#include "More.h"
#include "Less.h"
#include <iostream>

using namespace std;

More *more;
Less less1,less2,less3,less4,less5;

void printLess(Less less);
void printMore(More *more);
void updateMore(double db1,double db2);

int main()
{
    system("clear");
    more = new More();

    less1 = Less(20.20,10.20);
    less2 = Less(30.10,30.20);
    less3 = Less(20.2,20.3);
    less4 = Less(10.2,23.3);
    less5 = Less();

    cout<<"Arithmitiki Antikeimenwn \n";
    cout<<"Ektiposi\n";
    printLess(less1);
    printLess(less2);
    printLess(less3);
    printLess(less4);

    less5 = less1 + less2 + less3 + less4;
    updateMore(less5.getProtos(),less5.getDefteros());
    cout<<"Prosthesi\n";
    printMore(more);

    less5 = less1 - less2 - less3 - less4;
    updateMore(less5.getProtos(),less5.getDefteros());
    cout<<"Afairesi\n";
    printMore(more);

    less5 = less1 * less2 * less3 * less4;
    updateMore(less5.getProtos(),less5.getDefteros());
    cout<<"Pollaplasiasmos\n";
    printMore(more);

    less5 = less1 / less2 / less3 / less4;
    updateMore(less5.getProtos(),less5.getDefteros());
    cout<<"Diairesi\n";
    printMore(more);

    delete more;

    return 0;
}

void printLess(Less less)
{
    cout<<less.getProtos()<<" "<<less.getDefteros()<<"\n";
}

void printMore(More *more)
{
    cout<<more->getProtos()<<" "<<more->getDefteros()<<"\n";
}

void updateMore(double db1,double db2)
{
    more->setProtos(db1);
    more->setDefteros(db2);
}
