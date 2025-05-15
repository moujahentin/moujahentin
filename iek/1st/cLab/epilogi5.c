#include<stdio.h>

int main(void)
{
int posa;
float timi, tt;
printf("poso kanei to zeygari : ");
scanf("%f", &timi);
printf("posa zeugaria phrate : ");
scanf("%d", &posa);
if (posa>18) posa=posa-3;
else if (posa>=10) posa=posa-2;
else if (posa>=5) posa=posa-1;
else posa=posa;
tt=(posa*timi);
printf("teliki timi %.2f", tt);
    return 0;
}
