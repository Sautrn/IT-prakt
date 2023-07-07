#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int x, y, i=1, j, k, fact;
    SetConsoleOutputCP(1251);
    printf("Введіть значення x та y: ");  //вводимо дані
    scanf ("%d %d", &x, &y);
    printf("\n");
    y=y-x;  //присвоєння змінним нових значень
    x=0;

    while (x<y)  //створення циклу
    {
        if (x==0)  //першим кроком є 1
        {
            x=x+1;
            i=1;
        }
        else
        {
            fact=0;
            for (j=1; j<=i;j++)  //знаходження факторіалу
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
        k=k+1;  //збільшення кроку на 1
    }

    printf ("Мінімальна кількість кроків для переходу від x до y: %d\n", k);  //виводимо результат

    return 0;
}
