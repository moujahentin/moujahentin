#include "More.h"

More::More()
{
    setProtos(0.0);
    setDefteros(0.0);
}

More::More(double pr,double df)
{
    setProtos(pr);
    setDefteros(df);
}
More::~More()
{

}

void More::setProtos(double pr)
{
    protos = pr;
}

double More::getProtos()
{
    return protos;
}


void More::setDefteros(double df)
{
    defteros = df;
}

double More::getDefteros()
{
    return defteros;
}
