//count frequency of a given character in a string
#include<stdio.h>
int main(){
  char str[100],ch;
  int i,count=0;
  printf("enter a a string:");
  scanf("%99[^\n]",str);
  printf("enter the character to count:");
  scanf(" %c",&ch);
  for(i=0;str[i]!='\0';i++){
    if(str[i]==ch){
      count++;
    }
  }
  printf("frequency of '%c'=%d\n",ch,count);
  return 0;
}
