/*Το είδος ενός γραμματοσήμου καθορίζεται από τον χαρακτήρα E για εσωτερικού, 
Α για εξωτερικού και Τ για τοπικές αποστολές. Κάθε γραμματόσημο κατηγορίας
έψιλον κοστίζει 0,23€, κατηγορίες Α 0,70€ και κατηγορία σταθμών 0,15€ να γραφεί
ένα πρόγραμμα το οποίο να ζητάει να πληκτρολογήσουμε την ποσότητα & το είδος 
των γραμματοσήμων & κατόπιν να υπολογίζει και να εμφανίζει το ποσό που πρέπει να πληκτρολογήσουμε.*/

#include <iostream>
using namespace std;
int main(){
	int count;
	char eidos;
	float price,total;
	cout<<"Dwse posothta : ";
	cin>>count;
	cout<<"Dwse eidos : ";
	cin>>eidos;
	switch (eidos){
		case 'T':
		price=0.15;
		break;
		case 'E':
		price=0.23;
		break;
		case 'A':
		price=0.70;
		break;
		default:
		cout<<"Lathos typos";
		}
	total=count*price;
	cout<<"To poso einai "<<total;
	
	return 0;
	}
