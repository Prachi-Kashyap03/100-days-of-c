//check if a string is palindrome
  #include<stdio.h>
int main(){
  int str[100];
  int i,j,length=0,flag=1;
  printf("enter a string:");
  scanf("%99s",str);
  while(str[length]!='\0'){
    length++;
  }
  i=0;
  j=length-1;
  while(i<j){
    if(str[i]!=str[j]){
      flag=0;
      break;
    }
    i++;
    j--;
  }
  if(flag==1){
    printf("the string is a palindrome.\n");
  }
  else{
    printf("the string is not a palindrome.\n");
  }
  return 0;
}
