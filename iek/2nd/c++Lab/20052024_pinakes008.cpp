/*Άσκηση 8: Διαχείριση Εργαστηρίων σε Σχολή
Δημιουργήστε μια κλάση Lab που θα περιέχει τα εξής μέλη:
name: το όνομα του εργαστηρίου (συμβολοσειρά)
capacity: η χωρητικότητα του εργαστηρίου (ακέραιος αριθμός)
Δημιουργήστε έναν πίνακα αντικειμένων τύπου Lab για να αποθηκεύσετε τα στοιχεία 4 εργαστηρίων.
Υλοποιήστε μια μέθοδο που θα εμφανίζει όλα τα εργαστήρια με χωρητικότητα μεγαλύτερη από έναν
συγκεκριμένο αριθμό.*/

#include <iostream>
#include <cstring>
class Lab{
	private:
		std::string name;
		int capacity;
	public:
		Lab(){};
		Lab(std::string n,int c):name(n),capacity(c){};
		int getCapacity(){
			return capacity;
		}
		void display(){
			std::cout << "Lab Name: " << name << ", Capacity: " << capacity << std::endl;
		}
};
int main(){
	Lab labs[4];
	labs[0] = Lab("Physics Lab", 30);
	labs[1] = Lab("Chemistry Lab", 25);
	labs[2] = Lab("Computer Lab", 40);
	labs[3] = Lab("Biology Lab", 20);
	int capacityThreshold=0;
	std::cout << "Enter the capacity threshold: ";
	std::cin >> capacityThreshold;
	std::cout << "Labs with capacity greater than " << capacityThreshold << ":\n";
	for (int i = 0; i < 4; ++i) {
		if (labs[i].getCapacity() > capacityThreshold) {
			labs[i].display();
		}
	}
	return 0;
}
