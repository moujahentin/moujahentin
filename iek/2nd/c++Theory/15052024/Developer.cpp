#include "Developer.h"
#include <cstring>
#include <iostream>

using namespace std;

Developer::Developer()
{
}

Developer::~Developer()
{
}

void Developer::setOnoma(char onoma_buffer[80])
{
        strcpy(onoma,onoma_buffer);
}

char *Developer::getOnoma()
{
        return onoma;
}

void Developer::setEpitheto(char epitheto_buffer[80])
{
	strcpy(epitheto,epitheto_buffer);
}

char * Developer::getEpitheto()
{
        return epitheto;
}

void Developer::setEmail(char email_buffer[80])
{
        strcpy(email,email_buffer);
}

char * Developer::getEmail()
{
	return email;
}

void Developer::printReport()
{
	cout<<"Copyright (c)"<<"\n";
	cout<<"Onoma : "<<getOnoma()<<"\n";
	cout<<"Epitheto : "<<getEpitheto()<<"\n";
	cout<<"Emai : "<<getEmail()<<"\n";
}
