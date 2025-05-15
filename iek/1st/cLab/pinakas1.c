#include <stdio.h>
int main ()
{
    int i,x,y,a[10]={4,10,8,3,1,9,14,16,18,7}, b[10],c[10];
    x=0;
    y=0;
    for(i=0; i<10; i++)
    {
        if (a[i]%2==0)
        {
            b[x]=a[i];
            x++;
        }
        else
        {
            c[y]=a[i];
            y++;
        }
    }
    printf("pinakas a :");
        for (i=0; i<10; i++)
        printf(" %d ", a[i]);
    printf("\npinakas b :");
        for (i=0; i<x; i++)
        printf(" %d ", b[i]);
    printf("\npinakas c :");
        for (i=0; i<y; i++)
        printf(" %d ", c[i]);
    return 0;
}
