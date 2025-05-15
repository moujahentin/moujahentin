/*Να δημιουργήσετε μια κλάση με το όνομα "Cube" που θα έχει το εξής
χαρακτηριστικό:
Πλευρά (sideLength)
Η κλάση θα πρέπει να διαθέτει έναν constructor που θα δέχεται το μήκος της
πλευράς και θα αρχικοποιεί το αντίστοιχο χαρακτηριστικό. Επίσης, πρέπει να
παρέχει δύο μεθόδους: μία με το όνομα "calculateVolume" που θα υπολογίζει τονόγκο του κύβου και μία με το όνομα "calculateSurfaceArea" που θα υπολογίζει την
επιφάνεια του κύβου.*/
#include <iostream>
#include <cstring>
using namespace std;

class Cube
{
	private:
		float sideLength;
	public:
		Cube()=default;
		Cube(float sideLengthCube)
		{
			sideLength=sideLengthCube;
		}
		float calculateVolume()
		{
			return sideLength*sideLength*sideLength;
		}
		float calculateSurfaceArea()
		{
			return 6*sideLength*sideLength;
			
		}
};

int main()
{
	Cube cube1(2.2);
	cout<<"Ο όγκος του τετραγώnου είναι "<<cube1.calculateVolume()<<"cc"<<endl;
	cout<<"Η επιφάνεια του τετραγώνου είναι "<<cube1.calculateSurfaceArea()<<"sm"<<endl;
	
	return 0;
}
