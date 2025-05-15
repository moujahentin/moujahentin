#ifndef ALIEN_H
#define ALIEN_H
class Alien		
{
	protected:
		char name[80];
		int eyes;		
	public:
		Alien();
		Alien(char name[80],int eyes);
		~Alien();	
		void setName(char alname[80]);
		char * getName();		
		void setEyes(int aleyes);
		int getEyes();		
};			
#endif
