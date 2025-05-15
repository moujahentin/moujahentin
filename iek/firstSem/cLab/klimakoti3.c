#include<stdio.h>

int main()

{
float misth, epid, sum;
int kids;

printf("misthos : "); scanf("%f", &misth);
printf("paidia : ");  scanf("%d", &kids);

if      (kids==0) epid=misth*0.00;
else if (kids==1) epid=misth*0.05;
else if (kids==2) epid=misth*0.10;
else if (kids==3) epid=misth*0.20;
else  epid=misth*(((kids-3)*5)+20)/100;
sum=misth+epid;
printf("synolo pairneis : %8.2f",sum);
return 0;
}
//if  (kids>3)
