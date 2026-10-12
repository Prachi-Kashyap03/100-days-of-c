//reverse a string
#include<stdio.h>
int main(){
  char str[100];
  int i,j,temp,length=0;
  printf("enter a string:");
  scanf("%99[^\n]",str);
  while(str[length]!='\0'){
    length++;
  }
  i=0;
  j=length-1;
  while(i<j){
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;
    j--;
  }
  printf("reversed string =%s\n",str);
  return 0; 
}
