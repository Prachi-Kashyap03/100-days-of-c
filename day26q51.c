#include <stdio.h>
int main()
{
    int i, j, s;
    for (i = 5; i >= 1; i--)
    {
        s = 5;
        for (j = 1; j <= 5; j++)
        {
            if (j < i)
            {
                printf(" ");
            }
            else
            {
                printf("%d", j);
                s--;
            }
        }
        printf("\n");
    }
    return 0;
}
