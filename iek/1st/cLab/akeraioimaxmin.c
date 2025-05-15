#include<stdio.h>

int main()

{
int a,b,c,d,min;
printf("Dwse 4 akeraious :");
scanf("%d %d %d %d", &a, &b, &c, &d);
min=a;
if (b<min)
    min=b;
if (c<min)
    min=c;
if (d<min)
    min=d;

printf("o mikroteros einai : %d", min );


return 0;
}
