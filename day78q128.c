/*Read a text file and count how many vowels and consonants are in the file. 
Ignore digits and special characters.*/
#include<stdio.h>
#include<ctype.h>
int main(){
  FILE *fp;
  char ch;
  int vowels=0,consonants=0;
  //open the file in read mode
  fp=fopen("info.txt","r");
  if(fp==NULL){
    printf("file cannot be opened!");
    return 1;
  }
//read characters from the file
while((ch=fgetc(fp))!=EOF){
ch=tolower((unsigned char)ch);
if(ch>='a'&&ch<='z'){
  if(ch=='a'||ch=='e'||ch=='i'||ch=='0'||ch=='u'){
    vowels++;
  }
  else{
    consonants++;
  }
}
}
//display the result
printf("number of vowels=%d\n",vowels);
printf("number of consonants=%d\n",consonants);
fclose(fp);
return 0;
}
