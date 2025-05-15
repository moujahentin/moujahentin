#include<stdio.h>

int main()

{
int tem,;
float tt;

printf("Posa biblia agorases : ");
scanf("%d", &tem);

if      (tem<=5)  tt = 25*tem;
else if (tem<=15) tt = 5*25+20*(tem-5);
else if (tem<=20) tt = 5*25+10*20+(tem-15)*17;
else              tt = 5*25+10*20+5*17+(tem-20)*15;

printf("tha pliroseis : %.2f €", tt);


return 0;
}
