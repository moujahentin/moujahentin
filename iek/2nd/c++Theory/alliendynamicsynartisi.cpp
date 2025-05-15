#include <iostream>
#include <cstring>
using namespace std;

struct Allien
{
	int eyes;
	char name[50];
};
void theseOnoma(Allien *allien,char buffer[50]);
char * pareOnoma(Allien *allien);
void theseMatia(Allien *allien,int buffer);
int  pareMatia(Allien *allien);
void ektiposeAllien(Allien *allien);

char tmp_name[80];
int tmp_eyes;

int main()
{
	Allien *allien1,*allien2,*allien3;
	allien1= new Allien();
	cout<<"Dose onoma eksoghinou : "<<endl;
	cin>>allien1->name;
	cout<<"Posa matia ehei : "<<endl;
	cin>>allien1->eyes;
	allien2= new Allien();
	theseOnoma(allien2,"ET");
	theseMatia(allien2,6);
	allien3= new Allien;
	cout<<"Dose onoma eksoghinou : "<<endl;
	cin>>tmp_name;
	cout<<"Posa matia ehei : "<<endl;
	cin>>tmp_eyes;
	theseOnoma(allien3,tmp_name);
	theseMatia(allien3,tmp_eyes);
	ektiposeAllien(allien1);
	ektiposeAllien(allien2);
	ektiposeAllien(allien3);
	delete allien1;
	delete allien2;
	delete allien3;
	return 0;
}
void  theseOnoma(Allien *allien,char buffer[50])
{
	strcpy(allien->name,buffer);
}

char * pareOnoma(Allien *allien)
{
	return allien->name;
}

void theseMatia(Allien *allien, int buffer)
{
	allien->eyes = buffer;
}

int pareMatia(Allien *allien)
{
	return allien->eyes;
}

void ektiposeAllien(Allien *allien)
{
	cout<<"Onoma eksoghinou : "<<pareOnoma(allien)<<endl;
	cout<<"Matia : "<<pareMatia(allien)<<endl;
}
