#ifndef PREDATOR_H
#define PREDATOR_H
#include "Alien.h"

class Predator:public Alien
{
	protected:
		char weapon[80];
		char special_skills[120];
		int  ammo;
	public:
		Predator();
		Predator(char name_buffer[80],int eyes_buffer,char weapon_buffer[80],char special_skills_buffer[120],int ammo_buffer);
		~Predator();
		void setWeapon(char weapon_buffer[80]);
		char *getWeapon();
		void setSpecialSkills(char special_skills_buffer[120]);
		char *getSpecialSkills();
		void setAmmo(int ammo_buffer);
		int  getAmmo();
		void printReport();
};
#endif
