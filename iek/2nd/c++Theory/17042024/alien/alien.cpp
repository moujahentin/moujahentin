#include "Alien.h"

Alien::Alien()
{
	setName(0.0);
	setEyes(0);
}
Alien::Alien(float nm, int ey)
{
	setName(nm);
	setEyes(ey);
}
Alien::~Alien()
{
	
}
void Alien::setName(float nm)
{
	name=nm;
}
float Alien::getName()
{
	return name;
}
void Alien::setEyes(int ey)
{
	eyes=ey;
}
int Alien::getEyes()
{
	return eyes;
}
Alien Alien::operator +(Alien alien)
{
	Alien temp;
	temp.setName(name+alien.getName());
	temp.setEyes(eyes+alien.getEyes());
	return temp;
}
Alien Alien::operator -(Alien alien)
{
	Alien temp;
	temp.setName(name-alien.getName());
	temp.setEyes(eyes-alien.getEyes());
	return temp;
}
Alien Alien::operator *(Alien alien)
{
	Alien temp;
	temp.setName(name*alien.getName());
	temp.setEyes(eyes*alien.getEyes());
	return temp;
}
Alien Alien::operator /(Alien alien)
{
	Alien temp;
	temp.setName(name/alien.getName());
	temp.setEyes(eyes/alien.getEyes());
	return temp;
}
