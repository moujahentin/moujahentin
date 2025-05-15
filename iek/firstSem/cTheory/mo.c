#include<stdio.h>

int main()
{
    int b,pl,sum;
    float mo;
    pl=0;
    sum=0;
    for (int i=1; i<11; i++)
        {
        printf("Dwse Bathmo\n");
        scanf("%d", &b);

        if ((b>=0) && (b<=20))
            {
            sum=sum+b;
            pl=pl+1;
            }
    }
    mo=sum/(float)pl;
    printf("O mesos oros einai %.2f", mo);

    return 0;
}
