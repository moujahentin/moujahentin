#ifndef DEVELOPER_H
#define DEVELOPER_H

class Developer
{
	protected:
	    char onoma[80];	
	    char epitheto[80];
  	    char email[80];
	public:
		 Developer();
		~Developer();
		void setOnoma(char onoma_buffer[80]);
		char *getOnoma();
		void setEpitheto(char epitheto_buffer[80]);
		char *getEpitheto();
		void setEmail(char email_buffer[80]);
		char *getEmail();
		void printReport();
};
#endif
