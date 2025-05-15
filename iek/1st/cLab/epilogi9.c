#include<stdio.h>

int main(void)
{
int m,y,d;
printf("poios mhnas : ");
scanf("%d" , &m);
printf("poia xronia : ");
scanf("%d", &y);
if (m==2) d=28;
if ((m=2) && (y%4==0) && (y%100!=0)|| (y%400==0)) d=29;
if ((m<=7) && (m%2==1) && (m!=2))  d=31;
if ((m<=7) && (m%2==0) && (m!=2))  d=30;
if ((m>7)  && (m%2==1)) d=30;
if ((m>7)  && (m%2==0)) d=31;




printf("meres : %d", d);
    return 0;
}
