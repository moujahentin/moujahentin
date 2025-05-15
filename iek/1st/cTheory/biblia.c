#include <stdio.h>

int main()
{
int tem;
float sum, price;
printf("Posa vivlia agorasate : "); scanf("%d", &tem);

if(tem>=50) tem=tem-2;
else if ((tem<50)&&(tem>=10)) tem=tem-1;

price=20;
sum=price*tem;
if (sum>800) sum=sum-(sum*0.10);
printf("agorasate %d biblia kai tha plhrwsete %.2f euro ", tem, sum);
return 0;
}
