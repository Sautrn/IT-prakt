#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t1, t2, t3;
    float rez;               //���������� ������

    printf("Enter three values:\n");
    scanf("%d %d %d", &t1, &t2, &t3);      //�������� �����

    rez=(t1+t2+t3)/3;
    rez=rez/3;   //���������� ����������
    printf("Time required to eat the cake: %0.2f", rez);    //��������� ����������

    return 0;
}
