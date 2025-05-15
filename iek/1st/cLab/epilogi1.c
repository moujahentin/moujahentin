#include<stdio.h>

int main(void)
{
    int x,y,gin;

    printf("Proto Noumero    = ");
    scanf("%d", &x);
    printf("Deytero Noumenro = ");
    scanf("%d", &y);

    gin = x*y;
        if (gin>0)
            printf("Oi arithmoi einai omosimoi\n");
            printf("To ginomeno einai = %d", gin);

    return 0;
}
