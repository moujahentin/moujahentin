/*Παράδειγμα 8:
Δημιουργήστε μια κλάση `Flight` που θα αναπαριστά μια πτήση σε ένα
αεροδρόμιο. Η κλάση πρέπει να περιλαμβάνει τις ακόλουθες πληροφορίες:
- Κωδικός πτήσης (π.χ. AB123)
- Αεροδρόμιο αναχώρησης
- Αεροδρόμιο προορισμού
- Ώρα αναχώρησης (μορφή: ΩΩ:ΛΛ)
Δημιουργήστε υποκλάσεις για διάφορους τύπους πτήσεων:
1. `DomesticFlight`: Εσωτερική πτήση μέσα στη χώρα.
2. `InternationalFlight`: Διεθνής πτήση προς άλλη χώρα.
3. `AirTour`: Αεροπορική εκδρομή προς τουριστικό προορισμό.
Για κάθε υποκλάση, δημιουργήστε ένα διαφορετικό αντικείμενο πτήσης και
εμφανίστε τις πληροφορίες της πτήσης, συμπεριλαμβανομένου του κωδικού, του
αεροδρομίου αναχώρησης και προορισμού, καθώς και της ώρας αναχώρησης.*/

#include <iostream>
#include <cstring>
using namespace std;

class Flight{
	protected:
		string code;
		string departed;
		string destination;
		int hour;
		int min;
	public:
		Flight()=default;
		Flight(string c, string dep,string dest,int h,int m){
			code=c;
			departed=dep;
			destination=dest;
			hour=h;
			min=m;
		}
		string getCode()
		{
			return code;
		}
		string getDeparted()
		{
			return departed;
		}
		string getDestination()
		{
			return destination;
		}
		int getHour()
		{
			return hour;
		}
		int getMin()
		{
			return min;
		}
};
class DomesticFlight:public Flight{
	public:
		DomesticFlight(string c, string dep,string dest,int h,int m):Flight(c,dep,dest,h,m){}
};
class InternationalFlight:public Flight{
	public:
		InternationalFlight(string c, string dep,string dest,int h,int m):Flight(c,dep,dest,h,m){}
};	
class AirTour:public Flight{
	public:
		AirTour(string c, string dep,string dest,int h,int m):Flight(c,dep,dest,h,m){}
};

int main()
{
	DomesticFlight dom1("ab123","apoedw","prostaekei",22,50);
	InternationalFlight int1("cd456","sapan","sakat",13,15);
	AirTour air1("ef789","paei","erhetai",07,00);
	
	cout<<"Kodikos ptisis : "<<dom1.getCode()<<endl;
	cout<<"Aerodromio anaxorisis : "<<dom1.getDeparted()<<endl;
	cout<<"Aerodromio Proorismou : "<<dom1.getDestination()<<endl;
	cout<<"Ora anaxorisis : "<<dom1.getHour()<<":"<<dom1.getMin()<<endl;
	cout<<endl;
	cout<<"Kodikos ptisis : "<<int1.getCode()<<endl;
	cout<<"Aerodromio anaxorisis : "<<int1.getDeparted()<<endl;
	cout<<"Aerodromio Proorismou : "<<int1.getDestination()<<endl;
	cout<<"Ora anaxorisis : "<<int1.getHour()<<":"<<int1.getMin()<<endl;
	cout<<endl;
	cout<<"Kodikos ptisis : "<<air1.getCode()<<endl;
	cout<<"Aerodromio anaxorisis : "<<air1.getDeparted()<<endl;
	cout<<"Aerodromio Proorismou : "<<air1.getDestination()<<endl;
	cout<<"Ora anaxorisis : "<<air1.getHour()<<":"<<air1.getMin()<<endl;
	cout<<endl;
	
	return 0;
}
