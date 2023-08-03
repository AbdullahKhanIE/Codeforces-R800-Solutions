#include <stdio.h>
#include <string.h>
#define N 101
int main()
{
    char words[N], rev[N], wordt[N];
    scanf("%s", words);
    scanf("%s", wordt);
    int x = strlen(words);
    for (int i = 0; i < x; i++)
    {
        rev[x - i - 1] = words[i];
    }
    rev[x] = '\0';
    int y = strcmp(rev, wordt);
    if (strcmp(rev, wordt) == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}