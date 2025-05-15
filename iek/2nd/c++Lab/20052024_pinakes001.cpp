/*Άσκηση 1: Υπολογισμός Μέσου Όρου Μαθητών
Δημιουργήστε μια κλάση `Student` που θα περιέχει τα εξής μέλη:
- `name`: το όνομα του μαθητή (συμβολοσειρά)
- `grade`: η βαθμολογία του μαθητή (ακέραιος αριθμός)
Στη συνέχεια, δημιουργήστε έναν πίνακα αντικειμένων τύπου `Student` για να αποθηκεύσετε τα
στοιχεία 5 μαθητών. Στη συνέχεια, υπολογίστε τον μέσο όρο των βαθμών όλων των μαθητών και
εμφανίστε τον.*/

#include <iostream>
#include <string>

class Student{
	private:
		std::string name;
		int grade;
	public:
		Student(){}
		Student(std::string n,int g):name(n),grade(g){}
		int getGrade(){
			return grade;
		}
};
int main(){
	Student students[5];
	students[0] = Student("Αλέξανδρος", 18);
	students[1] = Student("Μαρία", 20);
	students[2] = Student("Γιώργος", 16);
	students[3] = Student("Ελένη", 19);
	students[4] = Student("Δημήτρης", 15);
	int totalGrade=0;
	for(int i=0; i<5; i++){
		totalGrade+=students[i].getGrade();
	}
	float averageGrade=totalGrade/5.0;
	std::cout<<"Ο μέσος όρος των βαθμών των μαθητών είναι: " << averageGrade << std::endl;
	return 0;
}
