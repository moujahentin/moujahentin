#include<stdio.h>

int main()
{
    char x;
    printf("Give a char\n");
    scanf("%c", &x);
    while (x!='z'){
        x++;
    printf("%c\n", x);
    }

    return 0;
}
