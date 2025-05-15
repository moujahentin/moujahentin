#ifndef ONOMA_H
#define ONOMA_H
#include <string>
using namespace std;
class Onoma{
	protected:
		string fname;
		string lname;
	public:
		Onoma();
		Onoma(string bf,string bl);
		~Onoma();
		void setFname(string bf);
		string getFname();
		void setLname(string bl);
		string getLname();
	};
#endif //ONOMA_H_INCLUDED
