/*Άσκηση 1
Δημιουργήστε ένα πρόγραμμα σε C++ που να διαχειρίζεται μια συλλογή από πλοία σε ένα λιμάνι. Το
πρόγραμμα θα πρέπει να περιλαμβάνει τις εξής κλάσεις:
Κλάση Ship:
Ιδιότητες:
name: Το όνομα του πλοίου.
Μέθοδοι:
Κατασκευαστές:
Προεπιλεγμένος κατασκευαστής που αρχικοποιεί το name σε κενή συμβολοσειρά.
Κατασκευαστής που δέχεται ένα όρισμα τύπου string για να θέσει το όνομα του πλοίου.
setName(string n): Θέτει το όνομα του πλοίου.
getName(): Επιστρέφει το όνομα του πλοίου.
start(): Εικονική μέθοδος που εκτυπώνει "Starting the ship...".
Κλάση CargoShip (υποκλάση της Ship):
Ιδιότητες:
capacity: Η χωρητικότητα του πλοίου.
Μέθοδοι:
Κατασκευαστές:
Προεπιλεγμένος κατασκευαστής που αρχικοποιεί το capacity σε 0.
Κατασκευαστής που δέχεται δύο ορίσματα (string και int) για να θέσει το όνομα και τη χωρητικότητα
του πλοίου.
start(): Υπερκαλύπτει τη μέθοδο start της κλάσης Ship και εκτυπώνει "Starting the cargo ship...".
Κλάση Harbor:
Ιδιότητες:
ships: Πίνακας από αντικείμενα τύπου Ship με μέγιστο μέγεθος 10.
count: Ακέραια μεταβλητή που μετρά τα πλοία που έχουν προστεθεί στο λιμάνι.
Μέθοδοι:
Κατασκευαστής: Αρχικοποιεί το count σε 0.
addShip(Ship s): Προσθέτει ένα πλοίο στον πίνακα ships αν δεν έχει γεμίσει. Αν έχει γεμίσει, εκτυπώνει
μήνυμα "Cannot add more ships, harbor is full.".
listShips(): Εκτυπώνει τα ονόματα όλων των πλοίων που βρίσκονται στο λιμάνι.
Κύριο Πρόγραμμα:
Δημιουργεί ένα αντικείμενο της κλάσης Harbor.
Δημιουργεί τρία πλοία: δύο αντικείμενα της κλάσης Ship και ένα αντικείμενο της κλάσης CargoShip.
Προσθέτει τα πλοία στο λιμάνι.
Εμφανίζει τη λίστα των πλοίων που βρίσκονται στο λιμάνι.*/

#include <iostream>
#include <string>
using namespace std;

class Ship
{
	protected:
		string name;
	public:
		Ship()=default;
		Ship(string name1):name(name1){};
		void setName(string n)
		{
			name=n;
		}
		string getName()
		{
			return name;
		}
		virtual void start()
		{
			cout<<"Starting the ship..."<<endl;
		}
};

class CargoShip:public Ship
{
	private:
		int capacity;
	public:
		CargoShip():Ship(),capacity(0){};
		CargoShip(string name1, int capacity1):Ship(name1),capacity(capacity1){};
		void start() override
		{
			cout<<"Starting the cargo ship..."<<endl;
		}
};

class Harbor
{
	private:
		static int const MAX_SHIPS=10;
		Ship ships[MAX_SHIPS];
		int count;
	public:
		Harbor():count(0){};
		void addShip(Ship s)
		{
			if (count < MAX_SHIPS) 
			{
				ships[count++] = s;
			}
			else
			{
				cout << "Cannot add more ships, harbor is full." << endl;
			}
		}
		void listShips()
		{
			cout << "Ships in the harbor:" << endl;
			for (int i = 0; i < count; ++i) 
			{
			cout << "- " << ships[i].getName() << endl;
			}
		}
};
int main() 
{
	Harbor harbor1;
	Ship ship1("Titanic");
	CargoShip ship2("Evergreen", 200);
	Ship ship3("Queen Mary 2");
	harbor1.addShip(ship1);
	harbor1.addShip(ship2);
	harbor1.addShip(ship3);
	harbor1.listShips();
	return 0;
}
