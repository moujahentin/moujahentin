#include<stdio.h>

int main(void)
{
    int x,gin;

    printf("posa atoma : " );
    scanf("%d", &x);

    if (x>7)
    {
        gin=(x-1)*8;
        printf("tha plhrwsete : %d", gin);
    }
    else
    {
        gin=x*8;
        printf("tha plhrwsete : %d", gin);
    }

    return 0;
}
