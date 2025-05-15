#include "Program.h"
#include <iostream>
using namespace std;

Program *iEfarmogiMou;

int main()
{
	iEfarmogiMou = new Program();
	iEfarmogiMou->setOnomaProgramatos("Windows 2024");
	cout<<"Efarmogi : "<<iEfarmogiMou->getOnomaProgrammatos()<<"\n";
	iEfarmogiMou->printReport();
	delete iEfarmogiMou;
	return 0;
}

