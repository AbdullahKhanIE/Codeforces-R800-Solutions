#include <stdio.h>
#define N 200
void makelow(char str1[]);

int main()
{
    int size1 = 0, size2 = 0;
    char array[N], array2[N];
    fgets(array, N, stdin);
    fgets(array2, N, stdin);
    makelow(array);
    makelow(array2);
    for (int i = 0; array[i] != '\0'; i++)
    {
        size1 += array[i] - '\0';
        size2 += array2[i] - '\0';
    }
    if (size1 > size2)
    {
        puts("1");
    }
    else if (size2 > size1)
    {
        puts("-1");
    }
    else
    {
        puts("0");
    }
    return 0;
}

void makelow(char str1[])
{
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] >= 65 && str1[i] <= 90)
        {
            str1[i] = str1[i] + 32;
        }
    }
}