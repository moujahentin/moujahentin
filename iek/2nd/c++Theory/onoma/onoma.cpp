#include "onoma.h"

Onoma::Onoma()
{
	setFname("");
	setLname("");
}

Onoma::Onoma (string bf,string bl)
{
	setFname(bf);
	setLname(bl);
	
}
Onoma::~Onoma()
{
	
}

void Onoma::setFname(string bf)
{
		fname=bf;
	
}

string Onoma::getFname()
{
		return fname;
}
void Onoma::setLname(string bl)
{
		lname=bl;
}
string Onoma::getLname()
{
	return lname;
}
