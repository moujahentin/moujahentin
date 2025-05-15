#include "Proion.h"
#include <cstring>

Proion::Proion()
{
	thesePerigrafi("");
	theseTimi(0.0);
}
Proion::Proion(char pr[80],double tm)
{
	thesePerigrafi(pr);
	theseTimi(tm);
}
Proion::~Proion()
{
	
}
void Proion::thesePerigrafi(char pr[80])
{
	strcpy(perigrafi,pr);
}
char * Proion::parePerigrafi()
{
	return perigrafi;
}
void Proion::theseTimi(double tm)
{
	timi = tm;
}
double Proion::pareTimi()
{
	return timi;
}
