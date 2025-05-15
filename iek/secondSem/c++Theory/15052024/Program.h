#ifndef PROGRAM_H
#define PROGRAM_H

#include "Developer.h"

class Program:public Developer
{
	protected:
		char onoma_programmatos[80];
	public:
		Program();
		~Program();
		void setOnomaProgramatos(char onoma_programmatos_buffer[80]);
		char * getOnomaProgrammatos();
		
};
#endif
