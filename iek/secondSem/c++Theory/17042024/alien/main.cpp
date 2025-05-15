#include "alien.h"
#include "planet.h"
#include <iostream>
using namespace std;

Planet *planet
Alien alien1,alien2,alien3,alien4,alien5;

void printAlien(Alien alien);
void printPlanet(Planet *planet);
void updatePlanet(float nm1, int ey1);

int main()
{
	system("clear");
	planet= new Planet();
	
	alien1=Alien(1.1,1);
	alien2=Alien(2.2,2);
	alien3=Alien(3.3,3);
	alien4=Alien(4.4,4);
	alien5=Alien(5.5,5);
	apotelesma=Alien();
	
	cout<<"Ektiposi"<<endl;
	printAlien(alien1);
	printAlien(alien2);
	printAlien(alien3);
	printAlien(alien4);
	printAlien(alien5);
	
	apotelesma=alien1+alien2+alien3+alien4+alien5;
	updatePlanet=(apotelesma.getName(),apotelesma.getEyes());
	cout<<"Prosthesi"<<endl;
	printPlanet(planet);
	
	apotelesma=alien1-alien2-alien3-alien4-alien5;
	updatePlanet=(apotelesma.getName(),apotelesma.getEyes());
	cout<<"Afairesi"<<endl;
	printPlanet(planet);
	
	apotelesma=alien1*alien2*alien3*alien4*alien5;
	updatePlanet=(apotelesma.getName(),apotelesma.getEyes());
	cout<<"Polaplasiasmos"<<endl;
	printPlanet(planet);
	
	apotelesma=alien1/alien2/alien3/alien4/alien5;
	updatePlanet=(apotelesma.getName(),apotelesma.getEyes());
	cout<<"Diairesi"<<endl;
	printPlanet(planet);
	
	delete planet;
		
	return 0;
}

void printAlien(Alien alien)
{
	cout<<alien.getName()<<" "<<alien.getEyes()<<"\n";
}
void printPlanet(Planet *planet)
{
	cout<<planet->getName()<<" "<<planet->getEyes()<<"\n";
}
void updatePlanet(float nm1, int ey1)
{
	planet->setName(nm1);
    planet->setEyes(ey1);
}
