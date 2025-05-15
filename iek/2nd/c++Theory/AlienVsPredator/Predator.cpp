#include "Predator.h"
#include <cstring>
#include <iostream>
using namespace std;

Predator::Predator()
{
		setName("");
		setEyes(0);
		setWeapon("");
		setSpecialSkills("");
		setAmmo(0);
}
Predator::Predator(char name_buffer[80], int eyes_buffer,char weapon_buffer[80], char special_skills_buffer[120], int ammo_buffer )
{
	strcpy(name,name_buffer);
	eyes=eyes_buffer;
	strcpy(weapon,weapon_buffer);
	strcpy(special_skills,special_skills_buffer);
	ammo=ammo_buffer;
}
Predator::~Predator()
{
}
void Predator::setWeapon(char weapon_buffer[80])
{
	strcpy(weapon,weapon_buffer);
}
char *Predator::getWeapon()
{
	return weapon;
}
void Predator::setSpecialSkills(char special_skills_buffer[120])
{
	strcpy(special_skills,special_skills_buffer);
}
char *Predator::getSpecialSkills()
{
	return special_skills;
}
void Predator::setAmmo(int ammo_buffer)
{
	ammo=ammo_buffer;
}
int Predator::getAmmo()
{
	return ammo;
}
void Predator::printReport()
{
	cout<<"Name: "<<getName()<<endl;
	cout<<"Eyes: "<<getEyes()<<endl;
	cout<<"Weapon: "<<getWeapon()<<endl;
	cout<<"Special Skills: "<<getSpecialSkills()<<endl;
	cout<<"Ammo: "<<getAmmo()<<endl;
	cout<<endl;
}
