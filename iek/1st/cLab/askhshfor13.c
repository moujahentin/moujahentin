#include<stdio.h>

int main()
{
int ep,i;
float dr,full,pos;
full=0;
dr=0;
for (i=1; i<=25; i++)
{
printf("posoi epivates : "); scanf("%d", &ep);
    if (ep==350)
        {
        full=full+1;
        }
    dr=dr+1;
}
pos=(full/dr)*100;
printf("pososto full : %.0f%%", pos);
return 0;
}
