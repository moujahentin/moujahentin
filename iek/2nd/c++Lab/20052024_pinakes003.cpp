/*Άσκηση 3: Διαχείριση Σημειώσεων Φοιτητών
Δημιουργήστε μια κλάση `Note` που θα περιέχει τα εξής μέλη:
- `subject`: το μάθημα της σημείωσης (συμβολοσειρά)
- `grade`: η βαθμολογία του φοιτητή στο μάθημα (πραγματικός αριθμός)
Δημιουργήστε έναν πίνακα αντικειμένων τύπου `Note` για να αποθηκεύσετε τις σημειώσεις 7
φοιτητών. Υλοποιήστε μια μέθοδο που να επιστρέφει το μέσο όρο των βαθμών όλων των φοιτητών
και εμφανίστε τον.*/

#include <iostream>
#include <cstring>

class Note{
	private:
		std::string subject;
		float grade;
	public:
		Note(){};
		Note(std::string sub,float gr):subject(sub),grade(gr){};
		float getGrade(){
			return 	grade;	
		}
};
int main(){
	Note notes[7];
	notes[0] = Note("Μαθηματικά", 85.5);
	notes[1] = Note("Φυσική", 90.0);
	notes[2] = Note("Χημεία", 78.0);
	notes[3] = Note("Βιολογία", 92.5);
	notes[4] = Note("Ιστορία", 88.0);
	notes[5] = Note("Γεωγραφία", 81.0);
	notes[6] = Note("Πληροφορική", 95.0);
	float totalGrade=0;
	for (int i=0; i<7;i++){
		totalGrade+=notes[i].getGrade();
	}
	float averageGrade = totalGrade / 7;
	std::cout << "Ο μέσος όρος των βαθμών των φοιτητών είναι: " << averageGrade << std::endl;
	return 0;
	
}
