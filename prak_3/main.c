#include <stdio.h>
#include <windows.h>

long long func(int k) {  //Функція для знаходження результату за умовою завдання
    long long dp0[k+1];
    long long dp1[k+1];

    dp0[1] = 2;
    dp1[1] = 0;

    for (int i = 2; i <= k; i++) {
        dp0[i] = dp0[i-1] + dp1[i-1];
        dp1[i] = dp0[i-1];
    }

    return dp0[k] + dp1[k];
}

int main() {
    int k;
    long long rez;
    SetConsoleOutputCP(1251); //Підключення української мови
    printf("Введіть кількість розрядів (р): ");  //Введення кількості розрядів
    scanf("%d", &k);

    rez = func(k); //Використання функції пошуку результату

    printf("Кількість чисел з %d розрядами: %lld\n", k, rez); //Виведення результату

    return 0;
}
