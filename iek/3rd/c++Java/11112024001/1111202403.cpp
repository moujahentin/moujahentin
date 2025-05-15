/*Ένας φορέας διοργανώνει έναν έρανο για φιλανθρωπικούς σκοπούς. Στόχος του είναι να συλλέξει το ποσό των 100.000 ευρώ. Να γραφεί ένα πρόγραμμα το οποίο να ζητάει το ποσό που διαθέτει το κάθε άτομο το οποίο συμμετέχει στον έρανο. Η επαναληπτική διαδικασία θα σταματάει όταν συμπληρώνει το ποσό των 100.000 ευρώ. Τέλος, το πρόγραμμα θα εμφανίζει το πλήθος των ατόμων που συμμετείχαν στον έρανο, καθώς και το μεγαλύτερο αλλά και το μικρότερο ποσό που δόθηκε. */

#include <iostream>
using namespace std;
int main(){
	int count=0,total=0,poso=0,maxposo=0,minposo=100000;
	cout<<"Poso : ";
	cin>>poso;
	total=total+poso;
	if (poso<minposo){minposo=poso;}
	if (poso>maxposo){maxposo=poso;}
	while(total<100000){
		count+=1;
		
		cout<<"Theloume alla "<<(100000-total)<<endl;
		cout<<"Poso : ";
		cin>>poso;
		total=total+poso;
		if (poso<minposo){minposo=poso;}
		if (poso>maxposo){maxposo=poso;}
		}
	cout<<"plithos : "<<count<<endl;
	cout<<"min "<<minposo<<endl;
	cout<<"max "<<maxposo<<endl;
	
	
	return 0;
	}
