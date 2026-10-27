/*Take two filenames from the user – a source file and a destination file. 
Copy all the content from the source file to the destination file using fgetc() and fputc().*/
#include<stdio.h>
int main(){
    FILE *source,*destination;
    char sourceFile[100],destinationFile[100];
    int ch;
    printf("enter source filename:");
    scanf("%99s",sourceFile);
printf("enter destination filename:");
    scanf("%99s",destinationFile);
    source=fopen(sourceFile,"r");
    if(source==NULL){
        printf("error opening source file!\n");
        return 1;
    }
destination=fopen(destinationFile,"w");
if(destination==NULL){
    printf("error opening destination file!\n");
    fclose(source);
  return 1;
}
  while((ch=fgetc(source))!=EOF){
    fputc(ch,destination);
  } 
  fclose(source);
  fclose(destination);
  printf("file copied successfully!\n");
  return 0;
}
