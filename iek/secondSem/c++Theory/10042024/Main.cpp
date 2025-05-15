#include "Proion.h"
#include <iostream>
using namespace std;

Proion *cornFlakes,*mentos;

int main()
{
	cornFlakes = new Proion("Kellog's Corn Flakes",2.85);
	mentos = new Proion("Mentos",0.90);
	
	cout<<cornFlakes->parePerigrafi()<<"\t"<<cornFlakes->pareTimi()<<"\n";
	cout<<mentos->parePerigrafi()<<"\t"<<mentos->pareTimi()<<"\n";
	
	delete cornFlakes;
	delete mentos;
	
	return 0;
}
