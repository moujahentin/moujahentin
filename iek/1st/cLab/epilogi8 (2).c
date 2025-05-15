#include<stdio.h>

int main(void)
{
int atoma;
float money;
printf("posoi skasan myth :");
scanf("%d", &atoma);
if (atoma<500)
    money=atoma*15;
else if (atoma<=800)
    money=atoma*13;
else if (atoma<=1000)
    money=10000;
else
    money=10000+(atoma-1000)*10;
printf("tha skasete tosa %.2f", money);
    return 0;
}
