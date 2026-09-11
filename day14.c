// check whether vowel consonant
#include<stdio.h>
int main(){
  char alpt;
printf("enter the alphabet:");
scanf("%c",&alpt);
if(alpt=='a'||alpt=='e'||alpt=='i'||alpt=='o'||alpt=='u'||alpt=='A'||alpt=='E'||alpt=='I'||alpt=='O'||alpt=='U'){
printf("it is vowel");
}
else{
printf("it is consonant");
} 
return 0;
}
