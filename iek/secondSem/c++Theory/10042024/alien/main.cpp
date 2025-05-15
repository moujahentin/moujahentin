#include "alien.h"
#include <iostream>
using namespace std;

Alien *cornFlakes,*mentos;

int main()
{
	cornFlakes = new Alien("Kellog's Corn Flakes",285);
	mentos = new Alien("Mentos",9);
	
	cout<<cornFlakes->getName()<<"\t"<<cornFlakes->getEyes()<<"\n";
	cout<<mentos->getName()<<"\t"<<mentos->getEyes()<<"\n";
	
	delete cornFlakes;
	delete mentos;
	
	return 0;
}
