//print a initials of a name
#include<stdio.h>
int main(){
  char name[100];
  int i;
  printf("enter your full name:");
  scanf("%99[^\n]",name);
  printf("initials:");
  for(i=0;name[i]!='\0';i++){
    if(i==0&&name[i]!=' '){
      printf("%c",name[i]);
    }
    else if(name[i]==' '&&name[i+1]!=' '&& name[i+1]!='\0'){
printf("%c",name[i+1]);
    }
  }
  printf("\n");
  return 0;
}
