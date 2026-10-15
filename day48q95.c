//check if one string is a rotation of another
#include<stdio.h>
int main(){
  char str1[100],str2[100];
  int i,j,len1=0,len2=0,found=0;
  printf("enter a first string:");
  scanf("%99s",str1);
  printf("enter second string:");
  scanf("%99s",str2);
  while(str1[len1]!='\0'){
    len1++;
  }
  while(str2[len2]!='\0'){
    len2++;
  }
  if(len1!=len2){
    printf("strings are not rotations of each other.\n");
    return 0;
  }
  for(i=0;i<len1;i++){
    found=1;
    for(j=0;j<len1;j++){
      if(str1[(i+j)%len1]!=str2[j]){
        found=0;
        break;
      }
    }
    if(found==1){
      break;
    }
  }
  if(found==1){
    printf("strings are rotations of each other.\n");
  }
  else{
    printf("strings are not rotations of each other.\n");
  }
  return 0;
}
