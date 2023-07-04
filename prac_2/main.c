#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int func (int x, int y) //функція для знаходження НСК
{
    int nsk;
    nsk=x*y;
    while ((x!=0) && (y!=0))
    {
        if (x>y)
            x=x%y;
        else
            y=y%x;
    }
    nsk=nsk/(x+y);
    return nsk;
}

int main()
{
    SetConsoleOutputCP(1251);  //Підключення української мови
    int i, n, N[1000], rez;
    printf ("Введіть кількість чисел: ");
    scanf ("%d", &n); //Введення кількості елементів масиву

    for (i=0; i<n;i++)
    {
        printf ("Введіть число %d: ", i+1);
        scanf ("%d", &N[i]); //Введення значень масиву
    }

    rez=N[0];
    for (i=1; i<n;i++) //Знаходження НСК
    {
        rez= func(rez, N[i]);
    }
    printf ("НСК = %d\n", rez); //Виведення результату

    return 0;
}
