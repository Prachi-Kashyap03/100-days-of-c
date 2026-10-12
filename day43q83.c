//count vowels and constants in a string 
#include<stdio.h>
int main(){
{
  char str[100];
  int i, vowels = 0, consonants = 0;
  printf("enter a string:");
  scanf("%99[^\n]", str);
  for (i = 0; str[i] != '\0'; i++)
  {
    if ((str[i] >= 'A' && str[i] <= 'Z') ||
        (str[i] >= 'a' && str[i] <= 'z'))
    {
      if (str[i] == 'a' || str[i] == 'e' ||
          str[i] == 'i' || str[i] == 'o' ||
          str[i] == 'u' || str[i] == 'I' ||
          str[i] == 'E' || str[i] == 'U' ||
          str[i] == 'A' || str[i] == '0')
      {
        vowels++;
      }
      else
      {
        consonants++;
      }
    }
  }

  printf("no. of vowels=%d\n", vowels);
  printf("no. of consonants=%d\n", consonants);
  return 0;
}
