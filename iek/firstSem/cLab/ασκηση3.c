#include<stdio.h>

int main(void)
{
    int days, mpd;
    float mikt, krat, kath;
    printf("poses meres douleueis = ");
    scanf("%d", &days);
    printf("posa pairneis thn mera = ");
    scanf("%d", &mpd);
    mikt=days*mpd;
    krat=mikt*0.2;
    kath=mikt-krat;
    printf("perneis tosa to mhna = %.2f", kath );

    return 0;
}
