/*Παράδειγμα 6: Δημιουργία κλάσης Person:
Η κλάση Person αναπαριστά ένα άτομο στη σχολική βάση δεδομένων.
Περιέχει τα εξής πεδία δεδομένων:
firstName: πεδίο τύπου string που αποθηκεύει το όνομα του ατόμου.
lastName: πεδίο τύπου string που αποθηκεύει το επώνυμο του ατόμου.
age: πεδίο τύπου int που αποθηκεύει την ηλικία του ατόμου.
Περιλαμβάνει έναν constructor για την αρχικοποίηση των πεδίων δεδομένων.Παρέχει getters για την πρόσβαση στα πεδία δεδομένων (getFirstName(),
getLastName(), getAge()).
Δημιουργία υποκλάσεων:
Δημιουργούνται υποκλάσεις για μαθητές (Student), καθηγητές (Teacher) και
διοικητικό προσωπικό (AdministrativeStaff), οι οποίες κληρονομούν από την κλάση
Person.
Προσθέτουν πεδία δεδομένων που είναι συγκεκριμένα για κάθε τύπο
προσωπικού:
Μαθητές (Student):
gradeLevel: πεδίο τύπου int που αποθηκεύει το επίπεδο της τάξης του μαθητή.
Καθηγητές (Teacher):
subject: πεδίο τύπου string που αποθηκεύει το μάθημα που διδάσκει ο καθηγητής.
Διοικητικό προσωπικό (AdministrativeStaff):
department: πεδίο τύπου string που αποθηκεύει το τμήμα στο οποίο ανήκει το
διοικητικό προσωπικό.
Περιλαμβάνουν constructors για την αρχικοποίηση των πεδίων δεδομένων και
παρέχουν getters για την πρόσβαση στα πεδία δεδομένων που προσθέτουν.
Κύριο πρόγραμμα:
Δημιουργείται ένα αντικείμενο για κάθε υποκλάση (Student, Teacher,
AdministrativeStaff).
Καλούνται οι getters των αντικειμένων για να εκτυπωθούν οι πληροφορίες τους
(όνομα, επώνυμο, ηλικία, επίπεδο/μάθημα/τμήμα).
Το πρόγραμμα τυπώνει τις πληροφορίες για κάθε τύπο προσωπικού*/
#include <iostream>
#include <cstring>
using namespace std;
class Person
{
	protected:
		string firstName;
		string lastName;
		int age;
	public:
		Person()=default;
		Person(string fName,string lName,int pAge)
		{
			firstName=fName;
			lastName=lName;
			age=pAge;
		}
		string getFirstName()
		{
			return firstName;
		}
		string getLastName()
		{
			return lastName;
		}
		int getAge()
		{
			return age;
		}
};
class Student:public Person
{
	private:
		int gradeLevel;
	public:
		Student()=default;
		Student(string fName,string lName,int pAge,int grade):Person(fName,lName,pAge)
		{
			gradeLevel=grade;
		}
		int getGrade()
		{
			return gradeLevel;
		}
		
};
class Teacher:public Person
{
	private:
		string subject;
	public:
		Teacher()=default;
		Teacher(string fName,string lName,int pAge,string teacherSubject):Person(fName,lName,pAge)
		{
			subject=teacherSubject;
		}
		string getSubject()
		{
			return subject;
		}
};
class AdministrativeStaff:public Person
{
	private:
		string department;
	public:
		AdministrativeStaff()=default;
		AdministrativeStaff(string fName,string lName,int pAge,string persDepartment):Person(fName,lName,pAge)
		{
			department=persDepartment;
		}
		string getDepartment()
		{
			return department;
		}
};
int main()
{
	Student student("John", "Doe", 20, 12);
    Teacher teacher("Jane", "Smith", 35, "Biology");
    AdministrativeStaff admin("Alice", "Johnson", 29, "Admissions");
    
    cout << "Student: " << student.getFirstName() << " " << student.getLastName()
         << ", Age: " << student.getAge() << ", Grade Level: " << student.getGrade() << endl;

    cout << "Teacher: " << teacher.getFirstName() << " " << teacher.getLastName()
         << ", Age: " << teacher.getAge() << ", Teaches: " << teacher.getSubject() << endl;

    cout << "Administrative Staff: " << admin.getFirstName() << " " << admin.getLastName()
         << ", Age: " << admin.getAge() << ", Department: " << admin.getDepartment() << endl;

	return 0;
}
