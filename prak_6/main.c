#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int x1, x2, y1, y2, dx, dy;
    float d;

    SetConsoleOutputCP(1251);  //���������� ��������� ����

    printf ("������ ���������� ������� �� ���� �������\n");
    scanf ("%d %d %d %d", &x1, &y1, &x2, &y2);  //�������� ��������� �����

    dx=x2-x1;
    dy=y2-y1;
    d=sqrt(pow(dx, 2)+pow(dy, 2));  //����� ������� �������

    printf("������� �������: %f\n", d);  //��������� ����������
    return 0;
}
