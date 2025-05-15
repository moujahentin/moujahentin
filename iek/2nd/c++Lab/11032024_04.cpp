/*4. Να δημιουργήσετε πρόγραμμα, το οποίο να δέχεται ένα γράμμα του
λατινικού αλφαβήτου και αν το γράμμα είναι το ‘Y’ ή το ‘y’, να τυπώνει το
μήνυμα «Yes», αν το γράμμα είναι το ‘Ν’ ή το ‘n’, να τυπώνει το μήνυμα
«No», αλλιώς να τυπώνει το μήνυμα «Wrong Input».*/

#include<iostream>
#include<string>
using namespace std;
int main(){
	char letter;
	
	cout<<"Dwse ena xaraktira : ";
	cin>>letter;
	if (letter=='Y' || letter=='y')
		cout<<"Yes";
	else if (letter=='N' || letter=='n')
		cout<<"No";
	else 
		cout<<"Wrong Input";
	return 0;
	}
