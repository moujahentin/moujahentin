#include "planet.h"

Planet::Planet()
{
    setName(0.0);
    setEyes(0);
}

Planet::Planet(float nm,int ey)
{
    setName(nm);
    setEyes(ey);
}
Planet::~Planet()
{

}

void Planet::setName(float nm)
{
    name = nm;
}

float Planet::getName()
{
    return name;
}


void Planet::setEyes(int ey)
{
    eyes = ey;
}

int Planet::getEyes()
{
    return eyes;
}
