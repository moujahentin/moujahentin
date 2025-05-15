#include <iostream>
using namespace std;

class A{
	public:
		virtual void display(){
			cout<<"Basiki Klasi"<<endl;
			}
	};
class Par1:public A{
	public:
		void display(){
			cout<<"1h paragogi klasi"<<endl;
			}
	};
class Par2:public A{
	public:
		void display(){
			cout<<"2h paragogi klasi"<<endl;
			}
	};
int main(){
	Par1 p1;
	Par2 p2;
	A*ptr;
	ptr=&p1;
	ptr->display();
	ptr=&p2;
	ptr->display();
	
	return 0;
	}
