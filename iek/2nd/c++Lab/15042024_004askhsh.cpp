/*Παράδειγμα 5: Θέλουμε να υλοποιήσουμε ένα πρόγραμμα διαχείρισης
βιβλιοθήκης. Κάθε βιβλίο έχει έναν τίτλο, έναν συγγραφέα και έναν κωδικό ISBN.
Η βιβλιοθήκη αποτελείται από πολλά βιβλία. Θέλουμε να μπορούμε να
προσθέτουμε βιβλία στη βιβλιοθήκη, να αφαιρούμε βιβλία από τη βιβλιοθήκη και
να εμφανίζουμε τη λίστα των βιβλίων που περιέχει.*/

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class Book
{
	private:
		string title;
		string author;
		string isbn;
	public:
		Book()=default;
		Book(string title1,string author1, string isbn1)
		{
			title=title1;
			author=author1;
			isbn=isbn1;
		}
		string getTitle()
		{
			return title;
		}
		string getAuthor()
		{
			return author;
		}
		string getIsbn()
		{
			return isbn;
		}
	
};
class Library
{
	private:
		vector<Book>books;
	public:
		void addBook(Book book)
		{
			books.push_back(book);
		}
		void printBooks()
		{
			cout<<"Books in the library : "<<endl;
			for(auto book:books)
			{
				cout<<"Title : "<<book.getTitle()<<",Author : "<<book.getAuthor()<<",ISBN : "<<book.getIsbn()<<endl;
			}
		}
};
int main()
{
	Book book1("To Kill a Mockingbird", "Harper Lee", "9780060935467");
	Library library;
	library.addBook(book1);
	library.printBooks();
	return 0;
}

