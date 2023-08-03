// I cant
#include <stdio.h>
int main()
{
    int input, n = 0;
    scanf("%d", &input);
    if (input <= 100 && input > 0)
    {
        for (int i = 1; i <= input; i++)
        {
            scanf("%d", &n);
            if (n == 1)
            {
                printf("Hard");
                return 0;
            }
        }
        printf("Easy");
    }
    return 0;
}