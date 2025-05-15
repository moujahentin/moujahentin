#include<stdio.h>
int main()
{
    int m1,i,a[5];
     for(i=0; i<5; i++)
    {
        printf("dwse ena akeraio :");
        scanf("%d", &a[i]);
    }
    for(i=0; i<4; i++){
    if(a[i]<a[i+1])
       m1 = m1 + 1;


    }
    if (m1==4)
        printf("taksinomimenos");
    else
        printf("den einai taksinomimenos");


    return 0;
}
