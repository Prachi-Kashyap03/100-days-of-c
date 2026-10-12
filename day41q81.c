//count characters in a string without using built-in length function
#include<stdio.h>
int main(){
  char str[100];
  int i=0;
  printf("enter a string:");
  scanf("%99[^\n]",str);
  while(str[i]!='\0'){
    i++;
  }
  printf("number of characters=%d\n",i);
  return 0;
}
