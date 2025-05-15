#include <iostream>
#include <string>

using namespace std;

void statiki_ektiposi(string s);
void dinamiki_ektiposi(string *s);
void enalagi_me_timi(string *s1,string *s2);
void enalagi_me_anafora(string **s1,string **s2);

string *s1,*s2;
string  s3,s4;

int main()
{
	system("clear");
	s1 = new string();
	s2 = new string();
	cout<<"Dwse to proto (Dinamiko) \n";
	getline(cin,*s1);
	cout<<"Dwse to deftero (Dinamiko) \n";
	getline(cin,*s2);
	dinamiki_ektiposi(s1);
	dinamiki_ektiposi(s2);
//	enalagi_me_timi(s1,s2);
	enalagi_me_anafora(&s1,&s2);
	dinamiki_ektiposi(s1);
	dinamiki_ektiposi(s2);
	delete s1;
	delete s2;

	cout<<"===========================\n";
	cout<<"Dwse to  trito (Statiko) \n";
	getline(cin,s3);
	cout<<"Dwse to tetarto (Statiko) \n";
	getline(cin,s4);
	statiki_ektiposi(s3);
	statiki_ektiposi(s4);
	enalagi_me_timi(&s3,&s4);
	statiki_ektiposi(s3);
	statiki_ektiposi(s4);
	return 0;
}


void statiki_ektiposi(string s)
{
	cout<<s<<"\n";
}

void dinamiki_ektiposi(string *s)
{
	cout<<*s<<"\n";
}


void enalagi_me_timi(string *s1,string *s2)
{
	cout<<"Enalagi me timi \n";
	string temp = *s1;
	*s1 =  *s2;
	*s2 = temp;
}

void enalagi_me_anafora(string **s1,string **s2)
{
	cout<<"Enalagi me anafora \n";
	string *temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}
