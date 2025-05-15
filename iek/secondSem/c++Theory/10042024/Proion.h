#ifndef PROION_H
#define PROION_H
class Proion		
{
	protected:
		char perigrafi[80];
		double timi;		
	public:
		Proion();
		Proion(char pr[80],double tm);
		~Proion();	
		void thesePerigrafi(char pr[80]);
		char * parePerigrafi();		
		void theseTimi(double tm);
		double pareTimi();		
};			
#endif
