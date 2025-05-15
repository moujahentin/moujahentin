#include "Less.h"

Less::Less()
{
    setProtos(0.0);
    setDefteros(0.0);
}

Less::Less(double pr,double df)
{
    setProtos(pr);
    setDefteros(df);
}

Less::~Less()
{

}
void Less::setProtos(double pr)
{
    protos = pr;
}


double Less::getProtos()
{
    return protos;
}


void Less::setDefteros(double df)
{
    defteros = df;
}

double Less::getDefteros()
{
    return defteros;
}

Less Less::operator+(Less less)
{
  Less tmp;
  tmp.setProtos(protos + less.getProtos());
  tmp.setDefteros(defteros + less.getDefteros());
  return tmp;
}

Less Less::operator-(Less less)
{
  Less tmp;
  tmp.setProtos(protos - less.getProtos());
  tmp.setDefteros(defteros - less.getDefteros());
  return tmp;
}

Less Less::operator*(Less less)
{
  Less tmp;
  tmp.setProtos(protos * less.getProtos());
  tmp.setDefteros(defteros * less.getDefteros());
  return tmp;
}

Less Less::operator/(Less less)
{
  Less tmp;
  tmp.setProtos(protos / less.getProtos());
  tmp.setDefteros(defteros / less.getDefteros());
  return tmp;
}
