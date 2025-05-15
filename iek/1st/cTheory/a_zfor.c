#include <stdio.h>

int main()
{
    char x;
    printf("Give a char\n");
    scanf("%c", &x);
    for (int i=x+1; i<='z'; i++)
        printf("%c\n", i);

    return 0;
}
