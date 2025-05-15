#include<stdio.h>
int main()
{
    int i,max,maxp,min,minp,a[10];
    for(i=0; i<10; i++)
    {
        printf("dwse ena akeraio :");
        scanf("%d", &a[i]);
    }
    max=a[0];
    min=a[0];
    maxp=0;
    minp=0;
    for(i=0; i<10; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            maxp=i;
        }
        if (a[i]<min)
        {
            min=a[i];
            minp=i;
        }
    }
    printf("Pinakas a : ");
        for(i=0; i<10; i++)
        printf("% d ", a[i]);
    printf("\nTo megalytero einai to %d sthn thesh a[%d]\n", max,maxp);
    printf("to mikrotero einai to %d sthn thesh a[%d]", min,minp);
    return 0;
}

