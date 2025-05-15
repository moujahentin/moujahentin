#include <iostream>
#include <cstring>
using namespace std;

class Car{
	protected:
		string brand;
	public:
		Car()=default;
		Car(string carBrand)
		{
			brand=carBrand;
		}
		
		void setBrand(string b)
		{
			brand=b;
		}
		
		string getBrand()
		{
			return brand;
		}
		
		void start()
		{
			cout<<"vroom"<<endl;
		}
};

class ElectricCar:public Car{
	public:
		ElectricCar():Car(){}
		ElectricCar(string b) : Car(b) {}
		void start()
		{
			cout<<"vzzzzzz"<<endl;
		}
};
class Dealership{
	private:
		static const int max_cars=10;
		Car cars[max_cars];
		int count; 
	public:
		Dealership(){
			count=0;
		}
		
		void addCar(Car car){
			if (count<max_cars){
				cars[count++]=car;
			}
			else{
				cout<<"Dealership is full."<<endl;
			}
		}
		void listCars() {
			cout << "Cars in the dealership:" << endl;
			for (int i = 0; i < count; ++i) {
			cout << "- " << cars[i].getBrand() << endl;
			}
		}	
};
int main() {
	Dealership dealership;
	Car car1("Kia");
	ElectricCar car2("Tesla");
	Car car3("Opel");
	dealership.addCar(car1);
	dealership.addCar(car2);
	dealership.addCar(car3);
	dealership.listCars();
	
	return 0;
}





	
	
