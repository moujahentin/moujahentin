#include <iostream>
#include <cstring>
using namespace std;

struct Allien
{
	int eyes;
	char name[50];
};
void theseOnoma(Allien &allien,char buffer[50]);
char * pareOnoma(Allien &allien);
void theseMatia(Allien &allien,int buffer);
int  pareMatia(Allien &allien);
void ektiposeAllien(Allien &allien);

int main()
{
	Allien allien1,allien2;
 	cout<<"Dose onoma eksoghinou : "<<endl;
	cin>>allien1.name;
	cout<<"Posa matia ehei : "<<endl;
	cin>>allien1.eyes;
	theseOnoma(allien2,"ET");
	theseMatia(allien2,6);
	ektiposeAllien(allien1);
	ektiposeAllien(allien2);
	return 0;
}
void  theseOnoma(Allien &allien,char buffer[50])
{
	strcpy(allien.name,buffer);
}

char * pareOnoma(Allien &allien)
{
	return allien.name;
}

void theseMatia(Allien &allien, int buffer)
{
	allien.eyes = buffer;
}

int pareMatia(Allien &allien)
{
	return allien.eyes;
}

void ektiposeAllien(Allien &allien)
{
	cout<<"Onoma eksoghinou : "<<pareOnoma(allien)<<endl;
	cout<<"Matia : "<<pareMatia(allien)<<endl;
}
