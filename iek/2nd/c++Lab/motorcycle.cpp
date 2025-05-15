
#include <iostream>
#include <string>
using namespace std;
class Motorcycle {
protected:
string brand;
public:
Motorcycle() : brand("") {}
Motorcycle(string b) : brand(b) {}
void setBrand(string b) {
brand = b;
}
string getBrand() {
return brand;
}
void start() {
cout << "Starting the motorcycle..." << endl;}
};
class ElectricMotorcycle : public Motorcycle {
private:
string type;
public:
ElectricMotorcycle() : Motorcycle(), type("") {}
ElectricMotorcycle(string b, string t) : Motorcycle(b), type(t) {}
void start() {
cout << "Starting the electric motorcycle..." << endl;
}
};
class Dealership {
private:
static const int MAX_MOTORCYCLES = 10;
Motorcycle motorcycles[MAX_MOTORCYCLES];
int count;
public:
Dealership() : count(0), motorcycles() {}
void addMotorcycle(Motorcycle moto) {
if (count < MAX_MOTORCYCLES) {
motorcycles[count++] = moto;
} else {cout << "Cannot add more motorcycles, dealership is full." << endl;
}
}
void listMotorcycles() {
cout << "Motorcycles in the dealership:" << endl;
for (int i = 0; i < count; ++i) {
cout << "- " << motorcycles[i].getBrand() << endl;
}
}
};
int main() {
Dealership dealership;
Motorcycle moto1("Honda");
ElectricMotorcycle moto2("Zero", "SR/F");
Motorcycle moto3("Harley-Davidson");
dealership.addMotorcycle(moto1);
dealership.addMotorcycle(moto2);
dealership.addMotorcycle(moto3);
dealership.listMotorcycles();
return 0;
}
