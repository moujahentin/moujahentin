#include <stdio.h>
double getEkthetis();
double gatVasi();
double getDinami();

double vasi,ekthetis,apotelesma;

int main()
{
system("cls");
printf("Dwse tin vasi :");
scanf("%1lf",&vasi);
printf("Dwse ton ektheti :");
scanf("%1lf",&ekthetis);
printf("Apotelesma %.1lf \n",getDinami());
return 0;
}

double getDinami()
{
if(ekthetis > 0.0)
{
apotelesma = 1;
while(ekthetis !=0)
{
apotelesma = apotelesma * vasi;
ekthetis--;
}
}
else if(ekthetis == 0)
{
apotelesma = 1;
}
return apotelesma;
}
