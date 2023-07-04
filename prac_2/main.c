#include <stdio.h>
#include <windows.h>

int main() {
    int n, i, arr[n], temp, b, a, rez;

    SetConsoleOutputCP(1251);
    printf("Введіть кількість чисел: ");  //введення кількості змінних
    scanf("%d", &n);

    printf("Введіть числа, розділені пробілом: ");  //введення змінних

    for (i=0; i<n; i++) {  //зчитування чисел та збереження їх в масиві
        scanf("%d", &arr[i]);
    }

    rez=arr[0];
    for (i=1; i<n; i++) {  //обчислення НСК
        a=rez;
        b=arr[i];
        while (b!=0) {
            temp=b;
            b=a%b;
            a=temp;
        }
        rez=(rez*arr[i])/a;
    }

    printf("Найменше спільне кратне: %d\n", rez);  //виведення результату

    return 0;
}
