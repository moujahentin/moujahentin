#include<stdio.h>

int main(void)
{
 int limit;


    printf("���������� �� ���� ��� ��� �������� ��� 2: ");
    scanf("%d", &limit);


    printf("�� �������� ��� 2 ����� �� %d �����:\n", limit);

    for (int i = 0; i <= limit; i++) {
        printf("2^%d = %d\n", i, 1 << i);
    }

    return 0;
}
