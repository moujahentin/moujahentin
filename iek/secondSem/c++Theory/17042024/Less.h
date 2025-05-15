#ifndef LESS_H
#define LESS_H

class Less
{
    protected:
        double protos;
        double defteros;
    public:
        Less();
        Less(double pr,double df);
        ~Less();
        void setProtos(double pr);
        double getProtos();
        void setDefteros(double df);
        double getDefteros();
        Less operator+(Less less);
        Less operator-(Less less);
        Less operator*(Less less);
        Less operator/(Less less);
};
#endif
