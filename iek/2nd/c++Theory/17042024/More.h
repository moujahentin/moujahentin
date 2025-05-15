#ifndef MORE_H
#define MORE_H

class More
{
    protected:
        double protos;
        double defteros;
    public:
        More();
        More(double pr,double df);
        ~More();
        void setProtos(double pr);
        double getProtos();
        void setDefteros(double df);
        double getDefteros();
};
#endif
