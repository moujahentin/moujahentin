#include<stdlib.h>
#include<stdio.h>

double ipologisedinami();

double vasi,ekthetis,apotelesma;

int main()
{
setbuf(stdout, NULL);
system("clear");
printf("Ipologistis dinamewn \n");
printf("Dwse tin vasi :");
scanf("%lf",&vasi);
printf("Dwse ton ektheti :");
scanf("%lf",&ekthetis);
system("clear");

printf("To %.1lf stin %.1lf ",vasi,ekthetis);
printf("isoutai me %.2lf \n",ipologisedinami());
return 0;
}

double ipologisedinami()
{
apotelesma = 1;
if(ekthetis >0)
{
while(ekthetis !=0)
{
apotelesma = apotelesma * vasi;
ekthetis--;
}
}
else if(ekthetis < 0)
{
ekthetis = ekthetis * -1;
while(ekthetis !=0)
{
apotelesma = apotelesma * vasi;
ekthetis--;
}
apotelesma = 1/apotelesma;
}
return apotelesma;
}
