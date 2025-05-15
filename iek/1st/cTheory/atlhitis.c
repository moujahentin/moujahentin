#include<stdio.h>
#include<string.h>

int main()
{
    float tim, btime;
    char name[50], bname[50];
    btime=999.9;

    for (int i=0; i<5; i++)
    {
    printf("Onoma?\n");
    scanf("%s", name);
    printf("Xronos?\n");
    scanf("%f", &tim);
    if(tim<btime){
        btime=tim;
        strcpy(bname,name);
    }
    }
    printf("Best time is %.2f and the winner is %s ", btime, bname);

    return 0;
}
