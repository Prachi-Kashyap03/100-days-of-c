// program to convert temperature to celsius to fahrenheit
#include<stdio.h>
int main()
{
  float celsius, fahrenheit;
printf("enter the temperature in celsius:");
  scanf("%f", &celsius);
fahrenheit=(celsius*9/5)+32;
printf("the temperature in fahrenheit is= %.2f\n",fahrenheit);
return 0;
}
