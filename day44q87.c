//count spaces,digits and special characters in a string
#include<stdio.h>
int main(){
  char str[100];
  int i, spaces=0,digits=0,special=0;
  printf("enter a string:");
  scanf("%99[^\n]",str);
  for(i=0;str[i]!='\0';i++){
    if(str[i]==' '){
      spaces++;
    }
    else if(str[i]>='0'&& str[i]<='9'){
      digits++;
    }
    else if(!((str[i]>='A'&& str[i]<='Z')||
  (str[i]>='a' && str[i]<='z'))){
    special++;
  }
  }
  printf("no. of spaces =%d\n", spaces);
  printf("no. of digits =%d\n",digits);
printf("no. of special characters =%d\n",special);
return 0;
}
