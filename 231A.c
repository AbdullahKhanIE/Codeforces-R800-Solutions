#include <stdio.h>
int main()
{
    int input, first = 0, second = 0, third = 0;
    scanf("%d", &input);
    if (input > 0 && input <= 1000)
    {
        int count = 0;
        int array[input][3];
        for (int i = 0; i < input; i++)
        {
            int flag = 0;
            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &array[i][j]);
                if (array[i][j] == 1)
                {
                    flag++;
                }
            }
            if (flag >= 2)
            {
                count++;
            }
        }
        printf("%d", count);
    }
    return 0;
}