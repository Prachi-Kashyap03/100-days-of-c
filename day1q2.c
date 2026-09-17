//program to find the sum, product,difference and quotient
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);
    if (b != 0)
        printf("Quotient = %d\n", a / b);
    else
        printf("Quotient cannot be calculated because division by zero is not possible.");
    return 0;
}
