//toggle case of each character in a string
#include<stdio.h>
int main(){
  char str[100];
  int i;
  printf("enter a string:");
  scanf("%99[^\n]",str);
  for(i=0;str[i]!='\0';i++){
    if(str[i]>='A'&& str[i]<='Z'){
      str[i]=str[i]+32;
    }
    else if(str[i]>='a'&&str[i]<='z'){
      str[i]=str[i]-32;
    }
  }
  printf("toggled string =%s\n",str);
  return 0;
}
