#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

char upper(char str[15])  //функція для переведення до великого регістру
{
    int i, len;
    len=strlen(str);
    for (i=0; i < len; i++)
    {
        str[i]=toupper(str[i]);
    }
    return str;
}

char seach(char str[15])  //функція для пошуку кількості символів
{
    int i, j , index=0, len;
    len = strlen(str);
    for (i=0; i < len; i++)
    {
        for (j=0; j < index; j++)
        {
            if (str[i] == str[j])
            {
                break;
            }
        }
        if (j == index)
        {
            str[index] = str[i];
            index++;
        }
    }
    str[index] = '\0';
    return str;
}

int countrez(char s[15], char str[15])  //функція для пошуку кількості анограм
{
    int len1, len2, i, j, k, rez=1, d, dil=1;

    len1=strlen(str);
    len2=strlen(s);

    for (i=0;i<len2;i++)
    {
        k=0;
        for (j=0;j<len1;j++)
        {
            if (s[i]==str[j])
                k=k+1;
        }

        d=1;
        for (j=1;j<=k;j++)
        {
            d=d*j;
        }
        dil=dil*d;
    }

    for (i=1; i<=len1; i++)
    {
        rez=rez*i;
    }

    rez=rez/dil;
    return rez;
}

int main()
{
    SetConsoleOutputCP(1251);
    char str[15], s[15];
    int len, i, j, rez;

    printf ("Введіть рядок:\n");
    scanf ("%s", &s);  //введення даних

    upper(s);

    len=strlen(s);

    for (i=0;i<len;i++)
    {
        str[i]=s[i];  //створення копії рядка
    }

    seach(s);

    rez=countrez(s, str);

    printf("\nКількість можливих анаграм: %d\n", rez);  //виведення результату
    return 0;
}
