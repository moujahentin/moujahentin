#include<stdio.h>

int main(void)
{
 int limit;


    printf("Εισαγάγετε το όριο για τις δυνάμεις του 2: ");
    scanf("%d", &limit);


    printf("Οι δυνάμεις του 2 μέχρι το %d είναι:\n", limit);

    for (int i = 0; i <= limit; i++) {
        printf("2^%d = %d\n", i, 1 << i);
    }

    return 0;
}
