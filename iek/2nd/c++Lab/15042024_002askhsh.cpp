/*Παράδειγμα 3:Η εταιρία "XYZ Corporation" θέλει να δημιουργήσει ένα
πρόγραμμα για τη διαχείριση του προσωπικού της. Κάθε υπάλληλος έχει έναν
ρόλο, όπως "Υπάλληλος" ή "Διευθυντής". Ο κάθε υπάλληλος πρέπει να έχει τη
δυνατότητα να εμφανίζει τον δικό του ρόλο.
Για την υλοποίηση αυτού του προγράμματος, δημιουργήστε δύο κλάσεις: την
Employee και την Manager. Η κλάση Employee θα έχει μια μέθοδο displayRole()
που θα εμφανίζει τον ρόλο "Employee", ενώ η κλάση Manager θα κληρονομεί από
την Employee και θα υπερκαλεί τη μέθοδο displayRole() για να εμφανίζει τον ρόλο
"Manager".
Δημιουργήστε αντικείμενα για την κλάση Manager και εμφανίστε τον ρόλο τους.*/

#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
	protected:
		string name;
	public:
	Employee()=default;
	Employee(string name1)
	{
		name=name1;
	}
	void displayRole()
	{
		cout<<name<<": Eimai ypallhlos"<<endl;
	}
};
class Manager:public Employee
{
	public:
		Manager(string name1):Employee(name1){}
		void displayRole()
		{
			cout<<name<<": Eimai didythintis"<<endl;
		}
};
int main()
{
	Employee empl1("Takis");
	empl1.displayRole();
	Manager man1("Lakis");
	man1.displayRole();

	return 0;
	
}
