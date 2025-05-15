#include "Program.h"
#include <cstring>

Program::Program()
{
	setOnoma("Emmanouil-Christos");
	setEpitheto("Christianakis");
	setEmail("xristianakhs11@gmail.com");
}

Program::~Program()
{
}

void Program::setOnomaProgramatos(char onoma_programmatos_buffer[80])
{
	strcpy(onoma_programmatos,onoma_programmatos_buffer);
}

char * Program::getOnomaProgrammatos()
{
	return onoma_programmatos;
}
