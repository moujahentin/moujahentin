#include<stdio.h>
int main()
{
    int i;
    i=1;

    while(i<10)
    {
       if(i<6)
        printf("%d ", i);
       else
        printf("%d ", 10-i);
    i++;
    }
   return 0;
}
