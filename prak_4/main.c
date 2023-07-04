#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k=0, i;

    printf("Enter a positive integer n: ");
    scanf ("%d", &n); //вводимо число

    for (i=1; i<=n; i++) //шукаємо результат
    {
        if (n/i==n%i)
        {
            k++;
        }
    }

    printf("\nNumber of equal divisors of a number %d: %d\n", n, k); //виводимо результат
    return 0;
}
