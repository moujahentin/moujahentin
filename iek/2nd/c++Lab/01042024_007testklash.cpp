#include <iostream>
const double PI {3.1415926535897932384626433832795};
class Cylinder
{
public:
	Cylinder()=default;
	Cylinder(double rad_param,double height_param)
	{
		base_radius=rad_param;
		height=height_param;
	}	
	double volume()
	{
		return PI*base_radius*base_radius*height;
	}
	double get_base_radius()
	{
		return base_radius;
	}
	double get_height()
	{
		return height;
	}
	void set_base_radius(double rad_param)
	{
		base_radius=rad_param;
	}
	void set_height(double height_param)
	{
		height=height_param;
	}
private:
	double base_radius;
	double height;
};
int main()
{
	Cylinder cylinder1(10,10);
	std::cout<<"Volume : "<<cylinder1.volume()<<std::endl;
	cylinder1.set_base_radius(100);
	cylinder1.set_height(10);
	std::cout<<"Volume : "<<cylinder1.volume()<<std::endl;
	return 0;
}
