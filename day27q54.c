/* *
  ***
 *****
*******
 *****
  ***
   * 
*/
#include <stdio.h>
int main()
{
    int i, j, space, star;
    // uper half
    for (i = 1; i <= 4; i++)
    {
        for (space = 1; space <= 4 - i; space++)
        {
            printf(" ");
        }
        for (star = 1; star <= 2 * i - 1; star++)
        {
            printf("*");
        }
        printf("\n");
    }
    // lower half
    for (i = 3; i >= 1; i--)
    {
        for (space = 1; space <= 4; space++)
        {
            printf(" ");
        }
        for (star = 1; star <= 2 * i - 1; star++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
