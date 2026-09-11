//to check if the alphabet is uppercase or lowercase digit or special character
#include<stdio.h>
int main(){
  char so;
printf("enter the character:");
scanf("%c",&so);
if(so>='A' && so<='Z'){
printf("uppercase");
}
else if(so>='a' && so<='z'){
  printf("lowercase");
  }
else if(so>='0' && so<='9'){
printf("digit");
}
else{
printf("special character");
  }
return 0;
}
