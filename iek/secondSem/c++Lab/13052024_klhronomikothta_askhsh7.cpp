/*Παράδειγμα 7: Δημιουργήστε μια κλάση MenuItem που θα αναπαριστά ένα
στοιχείο μενού σε ένα εστιατόριο, περιλαμβάνοντας πληροφορίες όπως το όνομα,
την περιγραφή και την τιμή. Δημιουργήστε υποκλάσεις για διάφορες κατηγορίες
στο μενού, όπως ορεκτικά, κυρίως πιάτα και επιδόρπια.
* Στην παρακάτω άσκηση, θα δημιουργήσουμε μια σειρά από κλάσεις σε C++, που
θα αναπαριστούν τα στοιχεία ενός μενού σε ένα εστιατόριο. Κάθε στοιχείο μενού
θα έχει ένα όνομα, μια περιγραφή και μια τιμή.
1. Δημιουργήστε μια βασική κλάση `MenuItem`, η οποία θα έχει τα εξής
χαρακτηριστικά:
- Όνομα (`name`): μια συμβολοσειρά που περιγράφει το όνομα του στοιχείου
του μενού.
- Περιγραφή (`description`): μια συμβολοσειρά που περιγράφει το περιεχόμενο
του στοιχείου του μενού.
- Τιμή (`price`): ένας δεκαδικός αριθμός που αναπαριστά την τιμή του στοιχείου
του μενού.
2. Δημιουργήστε τρεις υποκλάσεις:
- `Appetizer` (Ορεκτικό): Αναπαριστά ένα ορεκτικό στο μενού.
- `MainCourse` (Κυρίως Πιάτο): Αναπαριστά ένα κυρίως πιάτο στο μενού.
- `Dessert` (Επιδόρπιο): Αναπαριστά ένα επιδόρπιο στο μενού.
Κάθε υποκλάση πρέπει να κληρονομεί τα χαρακτηριστικά της βασικής κλάσης
`MenuItem` και να προσθέτει έναν κατασκευαστή για την αρχικοποίηση αυτών των
χαρακτηριστικών.
3. Δημιουργήστε αντικείμενα από κάθε υποκλάση (`Appetizer`, `MainCourse`,
`Dessert`) και ορίστε τα χαρακτηριστικά τους (όνομα, περιγραφή, τιμή).
4. Εκτυπώστε τα χαρακτηριστικά του κάθε στοιχείου μενού (όνομα, περιγραφή,
τιμή) για κάθε κατηγορία (ορεκτικά, κυρίως πιάτα, επιδόρπια).*/

#include <iostream>
#include <cstring>

using namespace std;

class MenuItem{
	protected:
		string name;
		string description;
		int price;
	public:
		MenuItem()=default;
		MenuItem(string n,string desc, int p){
			name=n;
			description=desc;
			price=p;
		}
		string getName()
		{
			return name;
		}
		string getDescription()
		{
			return description;
		}
		int getPrice()
		{
			return price;
		}
};
class Appetizer:public MenuItem{
	public:
		Appetizer()=default;
		Appetizer(string n,string desc,int p):MenuItem(n,desc,p){}
};
class MainCourse:public MenuItem{
	public:
		MainCourse()=default;
		MainCourse(string n,string desc,int p):MenuItem(n,desc,p){}
	
};
class Dessert:public MenuItem{
	public:
		Dessert()=default;
		Dessert(string n,string desc,int p):MenuItem(n,desc,p){}
};
 int main()
 {
	 Appetizer app1("Tzatziki", "Giaoutroskordion",3);
	 MainCourse main1("Kokoretsi","Entosthia svourixta",8);
	 Dessert dess1("xalvas","xalvas me lemonaki",5);
	 
	 cout<<app1.getName()<<"-"<<app1.getDescription()<<"-"<<app1.getPrice()<<endl;
	 cout<<main1.getName()<<"-"<<main1.getDescription()<<"-"<<main1.getPrice()<<endl;
	 cout<<dess1.getName()<<"-"<<dess1.getDescription()<<"-"<<dess1.getPrice()<<endl;
	 
	return 0;
}
