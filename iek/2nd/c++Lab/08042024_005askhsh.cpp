 /*Παράδειγμα 1: Να δημιουργηθεί μια γενική κλάση Animal, η οποία να έχει ένα
προστατευμένο πεδίο name. Να δημιουργηθούν δύο κλάσεις κληρονομικές από
την Animal: Dog και Cat. Κάθε κλάση πρέπει να παρέχει μια δημόσια μέθοδο
speak(), η οποία απλά να εμφανίζει ένα μήνυμα που αντιπροσωπεύει τον ήχο που
κάνει το κάθε ζώο*/
 
 #include <iostream>
 #include <cstring>
 using namespace std;
 
 class Animal
{
	protected:
		string name;
	public:
		Animal()=default;
		Animal(string name1)
		{
			name=name1;
		}
};
class Dog:public Animal
{
	public:
		Dog(string name1):Animal(name1){}
		void speak()
		{
			cout<<"Gab Gab"<<endl;
		}
};
class Cat:public Animal
{
	public:
		Cat(string name1):Animal(name1){}
		void speak()
		{
			cout<<"Niaou"<<endl;
		}
};
int main()
{
	Dog dog1("Azor");
	dog1.speak();
	Cat cat1("Matska");
	cat1.speak();
	return 0;
}
