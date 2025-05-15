#include <stdio.h>

int main()



{
    int a,i;
    float x,y,mo;
    x=0;
    y=0;
    for (i=1; i<=5; i++)
    {
        printf("dwse enan akeraio : \n"); scanf("%d", &a);
        if (a%2==0)
        {
            x=x+a;
            y=y+1;
        }
    }
    if (x==0)
        printf("den yparxoyn artioi");
    else{
        mo=x/y;
        printf("o mesos oros ton artiwn einai : %.2f", mo);
        }
    return 0;
}
