#ifdef ALIEN_H
#define ALIEN_H

class Alien
{
	protected:
		float name;
		int eyes;
	public:
		Alien();
		Alien(float nm, int ey);
		~Alien();
		void setName(float name);
		float getName();
		void setEyes(int ey);
		int getEyes();
		Alien operator+(Alien alien);
		Alien operator-(Alien alien);
		Alien operator*(Alien alien);
		Alien operator/(Alien alien);
};
#endif
