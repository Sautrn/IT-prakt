#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int x, y, i=1, j, k, fact;
    SetConsoleOutputCP(1251);
    printf("������ �������� x �� y: ");  //������� ���
    scanf ("%d %d", &x, &y);
    printf("\n");
    y=y-x;  //��������� ������ ����� �������
    x=0;

    while (x<y)  //��������� �����
    {
        if (x==0)  //������ ������ � 1
        {
            x=x+1;
            i=1;
        }
        else
        {
            fact=0;
            for (j=1; j<=i;j++)  //����������� ���������
            {
                fact=fact+j;
            }

            if (fact+i+1<=y-x)
            {
                x=x+(i+1);
                i=i+1;
            }
            else if (fact<=y-x)
            {
                x=x+i;
            }
            else
            {
                x=x+(i-1);
                i=i-1;
            }
        }
        k=k+1;  //��������� ����� �� 1
    }

    printf ("̳������� ������� ����� ��� �������� �� x �� y: %d\n", k);  //�������� ���������

    return 0;
}
