/*1) Να γραφεί ένα πρόγραμμα το οποίο να ζητάει την ποσότητα και την τιμή ενός προϊόντος, π χ. 10 τεμάχια των 150€. Και να υπολογίζει το συνολικό κόστος αγοράς, σύμφωνα με τα εξής:
• Αν η ποσότητα είναι πάνω από 100 τεμάχια, υπάρχει η έκπτωση 25%.
• Αν η ποσότητα είναι από 80 έως 100 τεμάχια, η έκπτωση είναι 15%. 
• Αν η ποσότητα είναι κάτω από 20 τεμάχια, υπάρχει επιβάρυνση 10%.*/
#include <iostream>
using namespace std;

int main(){
	int count,price,total;
	cout<<"Dwse posotita :";
	cin>>count;
	cout<<"Dwse timi :";
	cin>>price;
	
	if (count>100){
		total=(count*price)*0.75;
		}
	else if (count>80){
		total=(count*price)*0.85;
		}
	else if (count<20){
		total=(count*price)*1.1;
		}
	else
		total=count*price;
	cout<<"Synoliki Timi : "<<total;
	return 0;
	}
