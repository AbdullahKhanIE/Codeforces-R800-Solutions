#include <stdio.h>
#include <string.h>
int main()
{
    int input;
    char word[101];
    scanf("%d", &input);
    if (input > 0 && input < 101)
    {
        for (int i = 0; i < input; i++)
        {
            scanf("%s", word);
            int x = strlen(word);
            if (x > 10)
            {
                printf("%c%d%c\n", word[0], x - 2, word[x - 1]);
            }
            else
            {
                printf("%s\n", word);
            }
        }
    }
    return 0;
}