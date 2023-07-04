#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int x1, x2, y1, y2, dx, dy;
    float d;

    SetConsoleOutputCP(1251);  //підключення української мови

    printf ("Введіть координати початку та кінця вектора\n");
    scanf ("%d %d %d %d", &x1, &y1, &x2, &y2);  //введення координат точок

    dx=x2-x1;
    dy=y2-y1;
    d=sqrt(pow(dx, 2)+pow(dy, 2));  //пошук довжини вектора

    printf("Довжина вектора: %f\n", d);  //виведення результату
    return 0;
}
