//find the longest word in a sentence
#include<stdio.h>
int main(){
  char str[200];
  int i=0,j,start=0;
  int length=0,maxlength=0,maxstart=0;
  printf("enter a sentence:");
  scanf("%199[^\n]",str);
  while(1){
    if(str[i]!=' '&& str[i]!='\0'){
      length++;
    }
    else{
      if(length>maxlength){
        maxlength=length;
        maxstart=start;
      }
      length=0;
      start=i+1;
    }
      if(str[i]=='\0'){
        break;
      }
      i++;
    }
    printf("longest word=");
    for(j=maxstart;j<maxstart+maxlength;j++){
      printf("%c",str[j]);
    }
    printf("\nlength=%d\n",maxlength);
    return 0;
  }
