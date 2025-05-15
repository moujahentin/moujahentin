#ifndef PLANET_H
#define PLANET_H

class Planet
{
    protected:
        float name;
        int eyes;
    public:
        Planet();
        Planet(float nm,int ey);
        ~Planet();
        void setName(float nm);
        float getName();
        void setEyes(int ey);
        int getEyes();
};
#endif
