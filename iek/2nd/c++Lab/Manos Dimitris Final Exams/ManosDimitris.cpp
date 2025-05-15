#include <iostream>
#include <cstring>
using namespace std;

class Vehicle{
	protected:
		string make;
		string model;
		int year;
	public:
		Vehicle()=default;
		Vehicle(string vehMake,string vehModel, int vehYear)
		{
			make=vehMake;
			model=vehModel;
			year=vehYear;
		}
		void displayInfo()
		{
			cout<<"Make : "<<make<<endl;
			cout<<"Model : "<<model<<endl;
			cout<<"Year : "<<year<<endl;
		}
	
};

class Car:public Vehicle{
	private:
		int numberOfDoors;
	public:
		Car()=default;
		Car(string vehMake,string vehModel, int vehYear,int vehNumberOfDoors):Vehicle(vehMake,vehModel,vehYear)
		{
		
			numberOfDoors=vehNumberOfDoors;
		}
		void displayInfo()
		{
			cout<<"Make : "<<make<<endl;
			cout<<"Model : "<<model<<endl;
			cout<<"Year : "<<year<<endl;
			cout<<"Number of doors : "<<numberOfDoors<<endl;
		}	
};

class Bike:public Vehicle{
	private:	
		string hasCarrier;
	public:
		Bike()=default;
		Bike(string vehMake,string vehModel, int vehYear, string vehHasCarrier):Vehicle(vehMake,vehModel,vehYear)
		{
			hasCarrier=vehHasCarrier;
		}
		void displayInfo()
		{
			cout<<"Make : "<<make<<endl;
			cout<<"Model : "<<model<<endl;
			cout<<"Year : "<<year<<endl;
			cout<<"Has Carrier : "<<hasCarrier<<endl;
		}	
};


int main(){
	Car car1("Kia","Shuma",1999,5);
	car1.displayInfo();
	Bike bike1("BMX","racing",2005,"NO");
	bike1.displayInfo();
	
	
	return 0;
}
