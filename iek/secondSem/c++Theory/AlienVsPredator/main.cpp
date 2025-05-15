#include "Predator.h"
#include <iostream>
using namespace std;
Alien *alien1;
Alien *alien2;
Predator *predator1;
Predator *predator2;
int main()
{
	alien1=new Alien();
	alien1->setName("Alien1");
	alien1->setEyes(2);
	alien2=new Alien("Alien2",4);
	alien1->printReport();
    alien2->printReport();
    predator1=new Predator();
    predator1->setName("Predator1");
    predator1->setEyes(3);
    predator1->setWeapon("AK47");
    predator1->setSpecialSkills("Thermal Vision");
    predator1->setAmmo(999);
    predator2=new Predator("Predator2",5,"MP5","Night Vision",888);
    predator1->printReport();
    predator2->printReport();
    delete alien1;
    delete alien2;
    delete predator1;
    delete predator2;
	
	return 0;
}
