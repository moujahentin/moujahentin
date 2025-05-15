#include "alien.h"
#include <cstring>

Alien::Alien()
{
	setName("");
	setEyes(0);
}
Alien::Alien(char alname[80] , int aleyes)
{
	setName(alname);
	setEyes(aleyes);
}
Alien::~Alien()
{

}
void Alien::setName(char alname[80])
{
	strcpy(name,alname);
}
char * Alien::getName()
{
	return name;
}
void Alien::setEyes(int aleyes)
{
	eyes = aleyes;
}
int Alien::getEyes()
{
	return eyes;
}
