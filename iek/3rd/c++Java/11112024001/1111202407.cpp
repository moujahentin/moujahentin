/*    7) Να γραφεί ένα πρόγραμμα το οποίο να εμφανίζει στην οθόνη ένα δένδρο. Το ύψος του δένδρου (σε γραμμές) θα πρέπει να είναι μεταβλητό, και θα δίνεται από τον χρήστη. Για παράδειγμα, το δένδρο του πλαισίου έχει ύψος 6. Το μικρότερο επιτρεπτό ύψος του δέντρου πρέπει να είναι 4 γραμμές και το μεγαλύτερο 20. 
*
          ***
        *****
     ******** 
  ***********
	**/

#include <iostream>
using namespace std;
int main()
{
int i,j,gr;
do
{
cout << "Δώσε ύψος δένδρου : ";
cin >> gr;
if (!(gr>=4 && gr<=20))
cout << "Η τιμή δεν είναι αποδεκτή ξαναδώστην" << endl;
} while (!(gr>=4 && gr<=20));
for (i=0;i<=gr-2;i++)
{
for (j=1;j<=gr-2-i;j++) cout << ' ';
for (j=1;j<=i*2+1;j++) cout << '*';
cout << endl;
}
for (j=1;j<=gr-2;j++) cout << ' ';
cout << '*' << endl;
return 0;
} 
