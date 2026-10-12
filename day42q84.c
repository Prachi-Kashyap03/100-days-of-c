//conert a lowercase string to uppercase without using built-in functions
#include<stdio.h>
int main(){
  char str[100];
  int i;
  printf("enter a lowercase string:");
  scanf("%99[^\n]",str);
  for(i=0;str[i]!='\0';i++){
    if(str[i]>='a'&& str[i]<='z'){
      str[i]=str[i]-32;
    }
  }
  printf("uppercase string =%s\n",str);
  return 0;
}
