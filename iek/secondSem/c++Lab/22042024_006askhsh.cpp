/*Άσκηση 6: Στόχος της άσκησης είναι η δημιουργία ενός προγράμματος σε C++, το οποίο να
χρησιμοποιεί μια κλάση με το όνομα Rectangle για να υπολογίζει την επιφάνεια ενός ορθογώνιου. Η
κλάση Rectangle θα πρέπει να περιλαμβάνει τα εξής:
Ιδιωτικά μέλη:
1. Ένα ακέραιο length: που αναπαριστά το μήκος του ορθογωνίου.
2. Ένα ακέραιο width: που αναπαριστά το πλάτος του ορθογωνίου.
Δημόσιες μέθοδοι:Μια μέθοδο area(): που υπολογίζει την επιφάνεια του ορθογωνίου και επιστρέφει το αποτέλεσμα.
Στη συνέχεια, στην main συνάρτηση, το πρόγραμμα πρέπει να ζητά από τον χρήστη να εισάγει το
μήκος και το πλάτος του ορθογωνίου. Στη συνέχεια, θα πρέπει να χρησιμοποιήσει τη μέθοδο area()
της κλάσης Rectangle για να υπολογίσει και να εκτυπώσει την επιφάνεια του ορθογωνίου στην
οθόνη.*/
#include <iostream>
using namespace std;
class Rectangle{
	private:
		int length;
		int width;
	public:
		Rectangle()=default;
		Rectangle(int len, int wid){
			length=len;
			width=wid;
		}
		int area(){
			return length*width;
		}
	
};

int main(){
	
	Rectangle *ptrRect=new Rectangle(5,10);
	cout<<"Area of rectangle: "<<ptrRect->area()<<endl;

	
	delete ptrRect;
	
	
	return 0;	
}
