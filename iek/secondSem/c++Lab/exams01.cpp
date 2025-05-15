#include <iostream>
#include <cstring>
using namespace std;
class Parent{
    protected:
        int age;
        string name;
    public:
        Parent()=default;
        Parent(int a,string n)
        {
            age=a;
            name=n;
        }
        void setAge(int a)
        {
            age=a;
        }
        void setName(string n)
        {
            name=n;
        }

        int getAge()
        {
            return age;
        }
        string getName()
        {
            return name;
        }
        void details()
        {
            cout<<"My name is "<<name<<" and i am "<<age<<" years old..."<<endl;
        }

};

class Kid:public Parent{
    public:
        Kid(int age,string name):Parent(age,name){};
        void details()
        {
            cout<<"My name is "<<name<<" and i am "<<age<<" years old..."<<endl;
        }
};



int main()
{
    Parent parent1(38,"Mouja");
    parent1.details();
    Parent parent2;
    parent2.setAge(37);
    parent2.setName("Marialena");
    parent2.details();
    Kid kid1(5,"Mixail");
    kid1.details();

    return 0;
}
