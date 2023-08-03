#include <stdio.h>
int main()
{
    int count = 0, match = 0;
    char name[100];
    fgets(name, 100, stdin);
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] <= 122 && name[i] >= 97 && name[i] != ' ')
        {
            for (int j = i + 1; name[j] != '\0'; j++)
            {
                if (name[i] == name[j])
                {
                    match++;
                    break;
                }
            }
            count++;
        }
    }
    count = count - match;
    if (count % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}