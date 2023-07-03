# IT-prakt
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t1, t2, t3;
    float rez;               //Оголошення змінних

    printf("Print the first value:\n");
    scanf("%d", &t1);
    printf("Print second value:\n");
    scanf("%d", &t2);
    printf("Print the third value:\n");
    scanf("%d", &t3);       //Введення даних

    rez=(t1+t2+t3)/3;
    rez=rez/3;   //Обчислення результату
    printf("Time required to eat the cake: %0.2f", rez);    //Виведення результату

    return 0;
}
