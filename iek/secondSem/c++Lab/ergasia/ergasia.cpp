#include <iostream>
#include <cstring>
using namespace std;

class Student
{
	protected:
	string name;
	string surname;
	int am;
	float grade;
	
	public:
	Student()
	{}
	Student(string nameSt, string surnameSt, int amSt, float gradeSt)
	{
		name=nameSt;
		surname=surnameSt;
		am=amSt;
		grade=gradeSt;
	}
	void print()
	{
			cout<<"Name : "<<name<<" Surname : "<<surname<<" ID : "<<am<<" Grade : "<<grade;
	}
};

class phdStudent : public Student 
{
	private:
	string teacher;
	
	public:
	phdStudent():Student()
	{}
	phdStudent(string nameSt, string surnameSt, int amSt, float gradeSt, string teacherName):Student(nameSt, surnameSt,  amSt,  gradeSt)
	{
		teacher=teacherName;
	}
	void print()
	{
		Student::print();
		cout<<" Teacher : "<<teacher<<endl;
	}
};
int main(){
	Student s1 ("Takis","Papadopoulos",5,8.1);
	s1.print();
	cout<<endl;
	phdStudent s2 ("Lakis", "Konstantinou",4,7.3,"Papaioannou");
	s2.print();
	
	return 0; 
	}
