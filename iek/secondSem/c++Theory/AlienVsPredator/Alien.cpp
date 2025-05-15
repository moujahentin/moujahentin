#include "Alien.h"
#include <cstring>
#include <iostream>

using namespace std;

Alien::Alien()
{
	setName("");
	setEyes(0);
}
Alien::Alien(char name_buffer[80],int eyes_buffer)
{
	strcpy(name,name_buffer);
	eyes=eyes_buffer;
}
Alien::~Alien(){}
void Alien::setName(char name_buffer[80])
{
	strcpy(name,name_buffer);
}
char *Alien::getName()
{
	return name;
}
void Alien::setEyes(int eyes_buffer)
{
	eyes=eyes_buffer;
}
int Alien::getEyes()
{
	return eyes;
}
void Alien::printReport()
{
	cout<<"Name: "<<getName()<<endl;
	cout<<"Eyes: "<<getEyes()<<endl;
	cout<<endl;
}
