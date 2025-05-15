/*Άσκηση 5
Άσκηση: Εύρεση Βιβλίων Μετά τον Καθορισμένο Χρόνο
Δημιουργήστε μια κλάση Book που θα αναπαριστά ένα βιβλίο. Η κλάση θα έχει τα ακόλουθα ιδιωτικά
μέλη:
title: ο τίτλος του βιβλίου (συμβολοσειρά)
author: ο συγγραφέας του βιβλίου (συμβολοσειρά)
year: το έτος έκδοσης του βιβλίου (ακέραιος αριθμός)
Υλοποιήστε δύο κατασκευαστές για την κλάση Book:
Ένας κενός κατασκευαστής που να μην πραγματοποιεί καμία αρχικοποίηση.
Ένας κατασκευαστής που να δέχεται τα τρία όρισματα (τίτλος, συγγραφέας, έτος) και να αρχικοποιεί
τα αντίστοιχα μέλη της κλάσης.
Υλοποιήστε μια μέθοδο getYear() που να επιστρέφει το έτος έκδοσης του βιβλίου.Υλοποιήστε μια μέθοδο display() που να εμφανίζει τα στοιχεία του βιβλίου (τίτλος, συγγραφέας, έτος).
Στη συνέχεια, στη main(), δημιουργήστε έναν πίνακα αντικειμένων τύπου Book για να αποθηκεύσετε
τα στοιχεία 10 βιβλίων. Χρησιμοποιήστε τον δεύτερο κατασκευαστή για να αρχικοποιήσετε τα βιβλία.
Ζητήστε από τον χρήστη να εισάγει ένα έτος και εμφανίστε όλα τα βιβλία που εκδόθηκαν μετά από
αυτό το έτος, χρησιμοποιώντας τη μέθοδο display() για κάθε βιβλίο που πληροί το κριτήριο.
Σημείωση: Ο πίνακας βιβλίων θα πρέπει να προκαθοριστεί με 10 θέσεις και να γίνει αρχικοποίηση
μέσω του αντίστοιχου κατασκευαστή που δέχεται όρισματα.*/

#include <iostream>
#include <cstring>

class Book{
	private:
		std::string title;
		std::string author;
		int  year;
	public:
		Book(){};
		Book(std::string tit,std::string aut,int y):title(tit),author(aut),year(y){};
		int getYear(){
			return year;
		}
		void display(){
			std::cout<<"Title: "<<title<<", Author: "<<author<<", Year:"<<year<<std::endl;
		}
};
int main(){
	Book books[10];
	books[0] = Book("Book1", "Author1", 2001);
	books[1] = Book("Book2", "Author2", 1999);
	books[2] = Book("Book3", "Author3", 2010);
	books[3] = Book("Book4", "Author4", 2005);
	books[4] = Book("Book5", "Author5", 2015);
	books[5] = Book("Book6", "Author6", 1995);
	books[6] = Book("Book7", "Author7", 2020);
	books[7] = Book("Book8", "Author8", 1980);
	books[8] = Book("Book9", "Author9", 2000);
	books[9] = Book("Book10", "Author10", 2021);
	int yearThreshold;
	std::cout<<"Enter the year threshold: ";
	std::cin>>yearThreshold;
	std::cout<<"Books published after "<<yearThreshold<<std::endl;
	for(int i=0;i<10;i++){
		if(books[i].getYear()>yearThreshold){
			books[i].display();
		}
	}
	return 0;
}
