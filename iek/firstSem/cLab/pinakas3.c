#include<stdio.h>
int main()
{
    int i,a[10];
    for(i=0; i<10; i++)
    {
        printf("dwse ena akeraio :");
        scanf("%d", &a[i]);
    }
    printf("Pinakas a : ");
        for(i=0; i<10; i++)
        printf("% d ", a[i]);
    printf("\nPinakas a anapoda: ");
        for(i=9; i>=0; i--)
        printf("% d ", a[i]);
    return 0;
}
