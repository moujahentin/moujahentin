#include<stdio.h>

int main()

{
int tem;
float price, tt;
price =  0.00;

printf("Posa tetradia agorases : ");
scanf("%d", &tem);

if (tem<=10)
tt= 2.5*tem;
if ((tem>10)&&(tem<21))
tt = 2.5*10 + 2.0*(tem-10);
if ((tem>20)&&(tem<51))
tt = 2.5*10 + 2.0*10 + (tem-20)*1.7;
if (tem>50)
tt = 2.5 * 10 + 2.0*10 +30*1.7+ (tem-50)*1.5;

printf("tha pliroseis : %.2f €", tt);


return 0;
}
