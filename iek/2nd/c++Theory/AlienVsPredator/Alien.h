#ifndef ALIEN_H
#define ALIEN_H

class Alien
{
	protected:
		char name[80];
		int  eyes;
	public:
		Alien();
		Alien(char name_buffer[80],int eyes_buffer);
		~Alien();
		void setName(char name_buffer[80]);
		char *getName();
		void setEyes(int eyes_buffer);
		int  getEyes();
		void printReport();
};
#endif
