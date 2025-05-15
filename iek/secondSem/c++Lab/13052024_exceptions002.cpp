/*Άσκηση 2:
Να γραφεί ένα πρόγραμμα που να διαβάζει ένα αρχείο με ακέραιους αριθμούς και να υπολογίζει τον
μέσο όρο των αριθμών που περιέχει το αρχείο. Να χρησιμοποιηθεί μηχανισμός χειρισμού εξαιρέσεων
για πιθανά σφάλματα κατά την ανάγνωση του αρχείου.*/

#include <iostream>
#include <fstream>
#include <vector>
#include <numeric>
#include <stdexcept>
using namespace std;

double calculateAverage(const vector<int>& numbers){
	double sum=accumulate(numbers.begin(),numbers.end(),0);
	return sum/numbers.size();	
	}

int main(){
	ifstream file("numbers.txt");
	if(!file.is_open()){
		cerr<<"Error: Unable to open file!"<<endl;
		return 1;
		}
	
	vector<int>numbers;
	int num;
	while(file>>num){
		numbers.push_back(num);
		}
		
	try{
		double average=calculateAverage(numbers);
		cout<<"Average:"<<average<<endl;		
		}
		catch (const exception& e){
			cerr<<"Error:"<<e.what()<<endl;
			}
	return 0;
	
	}
