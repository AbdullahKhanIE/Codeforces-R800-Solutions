#include <stdio.h>
#include <string.h>
int main()
{
    int cap = 0, small = 0;
    char word[101];
    scanf("%s", word);
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] <= 122 && word[i] >= 97)
            small++;
        if (word[i] <= 90 && word[i] >= 65)
            cap++;
    }
    if (cap > small)
    {
        for (int i = 0; word[i] != 0; i++)
        {
            if (word[i] <= 122 && word[i] >= 97)
            {
                word[i] -= 32;
            }
        }
        printf("%s", word);
    }
    else
    {
        for (int i = 0; word[i] != 0; i++)
        {
            if (word[i] <= 90 && word[i] >= 65)
            {
                word[i] += 32;
            }
        }
        printf("%s", word);
    }
}