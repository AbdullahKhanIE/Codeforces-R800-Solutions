#include <stdio.h>
#define N 200
int fgetslen(char arr[]);

int main()
{
    char array[N];
    fgets(array, N, stdin);
    array[fgetslen(array)] = '\0';
    for (int i = 0; array[i] != '\0'; i = i + 2)
    {
        for (int j = i + 2; array[j] != '\0'; j = j + 2)
        {
            int temp;
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("%s", array);

    return 0;
}

int fgetslen(char arr[])
{
    int len = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        len++;
    }
    return len - 1;
}