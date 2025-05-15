#include<stdio.h>

int main()

{
float misth, epid, sum;
int kids;

printf("misthos : "); scanf("%f", &misth);
printf("paidia : ");  scanf("%d", &kids);

switch(kids)
{
    case 0:
    epid=misth*0.00;
    break;
    case 1:
    epid=misth*0.05;
    break;
    case 2:
    epid=misth*0.10;
    break;
    case 3:
    epid=misth*0.20;
    break;
    default:
    epid=misth*(((kids-3)*5)+20)/100;
}
sum=misth+epid;
printf("synolo pairneis : %8.2f",sum);
return 0;
}

