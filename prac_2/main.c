#include <stdio.h>
#include <windows.h>

int main() {
    int n, i, arr[n], temp, b, a, rez;

    SetConsoleOutputCP(1251);
    printf("������ ������� �����: ");  //�������� ������� ������
    scanf("%d", &n);

    printf("������ �����, ������� �������: ");  //�������� ������

    for (i=0; i<n; i++) {  //���������� ����� �� ���������� �� � �����
        scanf("%d", &arr[i]);
    }

    rez=arr[0];
    for (i=1; i<n; i++) {  //���������� ���
        a=rez;
        b=arr[i];
        while (b!=0) {
            temp=b;
            b=a%b;
            a=temp;
        }
        rez=(rez*arr[i])/a;
    }

    printf("�������� ������ ������: %d\n", rez);  //��������� ����������

    return 0;
}
