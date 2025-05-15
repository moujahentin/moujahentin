/*Γράψτε ένα πρόγραμμα σε C++ που να αναπαριστά ένα σύστημα διαχείρισης βιβλίων και
περιοδικών. Το σύστημα θα περιλαμβάνει μια βασική κλάση Publication (Έκδοση) και δύο
παραγόμενες κλάσεις Book (Βιβλίο) και Magazine (Περιοδικό). Κάθε κλάση θα πρέπει να έχει
τα δικά της χαρακτηριστικά και μεθόδους.
Βασική Κλάση Publication
1. Ιδιότητες:
o title (τίτλος)
o author (συγγραφέας)
o price (τιμή)
2. Μέθοδοι:
o Κατασκευαστής (constructor) που αρχικοποιεί τις παραπάνω ιδιότητες.
o Μέθοδος displayInfo που εμφανίζει τις πληροφορίες της έκδοσης.
Παράγωγη Κλάση Book
1. Ιδιότητες:
o pageCount (αριθμός σελίδων)
2. Μέθοδοι:
o Κατασκευαστής που αρχικοποιεί τις ιδιότητες της κλάσης και καλεί τον
κατασκευαστή της βασικής κλάσης.
o Μέθοδος displayInfo που εμφανίζει τις πληροφορίες του βιβλίου
(συμπεριλαμβανομένου του αριθμού σελίδων).
Παράγωγη Κλάση Magazine
1. Ιδιότητες:
o issueNumber (αριθμός τεύχους)
2. Μέθοδοι:
o Κατασκευαστής που αρχικοποιεί τις ιδιότητες της κλάσης και καλεί τον
κατασκευαστή της βασικής κλάσης.
o Μέθοδος displayInfo που εμφανίζει τις πληροφορίες του περιοδικού
(συμπεριλαμβανομένου του αριθμού τεύχους).
Γράψτε ένα κύριο πρόγραμμα (main) που θα δημιουργεί αντικείμενα των κλάσεων Book και
Magazine, θα καλεί τις μεθόδους displayInfo και θα εμφανίζει τις πληροφορίες τους.*/


#include <iostream>
#include <string>
using namespace std;

class Publication
{
	protected:
		string title;
		string author;
		int price;
	public:
		Publication()=default;
		Publication(string title1, string author1, int price1 ):title(title1),author(author1),price(price1){}
		void displayInfo()
		{
			cout<<"Title : "<<title<<endl;
			cout<<"Author : "<<author<<endl;
			cout<<"Price : "<<price<<endl;
		}
	
};

class Book:public Publication
{
	private:
		int pages;
	public:
		Book(string title1, string author1, int price1, int pages1):Publication(title1,author1,price1),pages(pages1){}
		void displayInfo()
		{
			cout<<"Title : "<<title<<endl;
			cout<<"Author : "<<author<<endl;
			cout<<"Price : "<<price<<endl;
			cout<<"Pages : "<<pages<<endl;
		}
		
};
class Magazine:public Publication
{
	private:
		int issueNumber;
	public:
		Magazine(string title1, string author1, int price1, int issueNumber1):Publication(title1,author1,price1),issueNumber(issueNumber1){}
		void displayInfo()
		{
			cout<<"Title : "<<title<<endl;
			cout<<"Author : "<<author<<endl;
			cout<<"Price : "<<price<<endl;
			cout<<"Issue Number : "<<issueNumber<<endl;
		}
};

int main()
{
	Book book1("Skata","Traxanas",666,69);
	book1.displayInfo();
	cout<<endl;
	Magazine magazine1("Papakia","Papia",99,3);
	magazine1.displayInfo();
	cout<<endl;

	return 0;
}
