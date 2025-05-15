/*Παράδειγμα 1: Κλάση Κυλίνδρου
Να δημιουργήσετε μια κλάση με το όνομα `Cylinder`, η οποία θα περιέχει δύο μέλη
δεδομένων, τη βάση (`base_radius`) και το ύψος (`height`) ενός κυλίνδρου. Να
παρέχετε μια δημόσια μέθοδο (`volume`) που να υπολογίζει και να επιστρέφει τον
όγκο του κυλίνδρου. Στο κύριο μέρος του προγράμματος, να δημιουργήσετε ένα
αντικείμενο της κλάσης `Cylinder`, να τροποποιήσετε τις τιμές της βάσης και του
ύψους του κυλίνδρου, και να εκτυπώσετε τον όγκο του κυλίνδρου για κάθε αλλαγή.
Σημείωση: Αρχικά να οριστούν τα δεδομένα της κλάσης δημόσια. Στην συνέχεια να
τροποποιηθεί το πρόγραμμα ώστε τα δεδομένα της κλάσης να είναι ιδιωτικά.*/
#include <iostream>
const float PI=3.14;
using namespace std;
class Cylinder
{
	private:
		float base_radius;
		float height;
	public:		
		Cylinder()
		{
			base_radius=2.0;
			height=2.0;
		}
		Cylinder(float radius, float h)
		{
			base_radius=radius;
			height=h;
		}
		void volume()
		{
			float ogkos=(base_radius*base_radius)*height*PI;
			cout<<"O ogkos tou kylindrou einai "<<ogkos<<endl;
		}		
};
int main()
{
	Cylinder cyl1;
	cyl1.volume();
	Cylinder cyl2(2.1,2.1);
	cyl2.volume();
}
