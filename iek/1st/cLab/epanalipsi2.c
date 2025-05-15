#include <stdio.h>
#define p 3.14
int main()
{
    int R,i;
    float A;
    for (i=1; i<=50; i++)
    {
    printf("Dwse aktina kykloy : ");
    scanf("%d", &R);
    A = 2*p*R;
    printf("H diametros einai : %8.2f\n", A);
    }

    return 0;
}
