/*Άσκηση 3: Να γραφεί ένα πρόγραμμα που θα δέχεται έναν πίνακα ακεραίων και θα επιστρέφει τον
μεγαλύτερο αριθμό από αυτούς.*/

#include <iostream>
using namespace std;
int findMax(int *arr, int size){
	int max=*arr;
	for(int i=1; i<size; i++){
		if (*(arr+i)>max){
			max=*(arr+i);
		}
	}
	return max;
}


int main(){
	int arr[]={8,10,12,9,7};
	int size=sizeof(arr)/sizeof(arr[0]);
	int maxNum=findMax(arr,size);
	cout<<"O megalyteros einai : "<<maxNum<<endl;
	
	return 0;
}
