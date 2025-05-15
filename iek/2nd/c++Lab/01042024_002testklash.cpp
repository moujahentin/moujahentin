#include <iostream>
#include <cstring>

using namespace std;
class Person
{
		private:
			char name[30];
			int age;
		public:
			void setData(char name1[],int age1)
			{
				strcpy(name,name1);
				age=age1;
			}
			void printData()
			{
				cout<<"The name of the person is "<<name<<endl;
				cout<<"THe age of the person is "<<age<<endl;
			}
}; //telos klashs

int main()
{
		Person p;
		p.setData("PAPADOPOULOS",25);
		p.printData();
		
		return 0;
}
