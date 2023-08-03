#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    if (input < 163 && input > 0)
    {
        for (int i = 0; i < input; i++)
        {
            int a, b, c;
            scanf("%d%d%d", &a, &b, &c);
            if (a + b == c)
            {
                printf("+\n");
            }
            else if (a - b || b - a == c)
            {
                printf("-\n");
            }
        }
    }
    return 0;
}