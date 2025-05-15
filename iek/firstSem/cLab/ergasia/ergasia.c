#include <stdio.h>

int main()
{
     int number;

    printf("Δώσε έναν ακέραιο αριθμό: "); scanf("%d", &number);

    if (number > 10)     printf("Ο αριθμός είναι μεγαλύτερος του 10.\n");
    else                 printf("Ο αριθμός δεν είναι μεγαλύτερος του 10.\n");

    if (number > 0)      printf("Ο αριθμός είναι θετικός.\n");
    else if (number < 0) printf("Ο αριθμός είναι αρνητικός.\n");
    else                 printf("Ο αριθμός είναι μηδέν.\n");

    if (number % 3 == 0) printf("Ο αριθμός είναι πολλαπλάσιο του 3.\n");
    else                 printf("Ο αριθμός δεν είναι πολλαπλάσιο του 3.\n");

    if (number % 3 == 0
     && number % 5 == 0) printf("Ο αριθμός είναι πολλαπλάσιο του 3 και του 5.\n");
    else                 printf("Ο αριθμός δεν είναι πολλαπλάσιο του 3 και του 5.\n");


    return 0;
}
