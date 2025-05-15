#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
int litra,xar_20,xar_10,xar_5,ker_1,ker_2;
int resta;
cout << "Δωσε αριθμό λίτρων:";
cin >> litra;
resta=50-litra;
if (resta<0)
{
cout << "Δεν φτάνουν τα χρήματα για τόσα λίτρα" << endl;
exit(1);
}
xar_20=resta/20;
resta=resta % 20;
xar_10=resta/10;
resta=resta % 10;
xar_5=resta/5;
resta=resta % 5;
ker_2=resta/2;
resta=resta % 2;
ker_1=resta;
cout << "Ρέστα" << endl;
if (xar_20>0) cout << "Χατρονομίσματα των 20 euro:" << xar_20 << endl;
if (xar_10>0) cout << "Χατρονομίσματα των 10 euro:" << xar_10 << endl;
if (xar_5>0) cout << "Χατρονομίσματα των 5 euro:" << xar_5 << endl;
if (ker_2>0) cout << "Κέρματα των 2 euro:" << ker_2 << endl;
if (ker_1>0) cout << "Κέρματα του 1 euro:" << ker_1 << endl;
return 0;
}
