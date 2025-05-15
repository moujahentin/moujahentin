/*Παράδειγμα 4: Να δημιουργηθούν δύο κλάσεις, οι Teacher και Course, που να
περιλαμβάνουν τα εξής:
Teacher (Καθηγητής):
Περιέχει τα εξής δεδομένα μέλη:
Όνομα (name)
Ειδίκευση (specialization)
Δημιουργήστε έναν default constructor που να αρχικοποιεί τα δεδομένα με κενές
τιμές.
Δημιουργήστε έναν constructor που να δέχεται το όνομα και την ειδίκευση του
καθηγητή.Υλοποιήστε μια μέθοδο για να εμφανίζει τις πληροφορίες του καθηγητή
(displayInfo).
Course (Μάθημα):
Περιέχει τα εξής δεδομένα μέλη:
Τίτλος (title)
Καθηγητής (teacher)
Δημιουργήστε έναν default constructor που να αρχικοποιεί τον τίτλο με κενή τιμή
και τον καθηγητή με έναν default καθηγητή.
Δημιουργήστε έναν constructor που να δέχεται τον τίτλο του μαθήματος και έναν
καθηγητή.
Υλοποιήστε μια μέθοδο για να εμφανίζει τις πληροφορίες του μαθήματος
(displayInfo).
Να γραφεί κώδικας που να εισάγει ένα μάθημα και έναν καθηγητή, να τους
συσχετίζει και στη συνέχεια να εκτυπώνει τις πληροφορίες του μαθήματος και του
καθηγητή.*/

#include <iostream>
#include <cstring>
using namespace std;

class Teacher
{
	protected:
		string name;
		string specialization;
	public:
		Teacher()=default;
		Teacher(string name1, string specialization1)
		{
			name=name1;
			specialization=specialization1;
		}
		void displayInfo()
		{
			cout<<name<<" : "<<specialization<<endl;
		}
		
};
class Course
{
	private:
		string title;
		Teacher teacher;
		
	public:
		Course()=default;
		Course(string title1, Teacher teacher1)
		{
			title=title1;
			teacher=teacher1;

		}
		void displayInfo()
		{
			cout<<title<<" : ";
			teacher.displayInfo();
		}
};

int main()
{
	Teacher teach1("Lakis","Mastroxalastis");
	teach1.displayInfo();
	Course cour1("diy",teach1);
	cour1.displayInfo();
	return 0; 
}
