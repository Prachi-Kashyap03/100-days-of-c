//replace spaces with hyphens in a string.
#include<stdio.h>
int main(){
  char str[100];
int i;
  printf("enter a string:");
  scanf("%99[^\n]",str);
  for(i=0;str[i]!='\0';i++){
    if(str[i]==' '){
      str[i]='-';
    }
  }
  printf("modified string=%s\n",str);
return 0;
}
