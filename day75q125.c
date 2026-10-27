/*Open an existing file in append mode and allow the user to enter a new line of text.
Append the text at the end without overwriting existing content.*/
#include<stdio.h>
int main(){
    FILE *fp;
    char filename[100];
    char text[500];
    printf("enter filename:");
    scanf("%99s",filename);
    fp=fopen(filename,"a");
    if(fp==NULL){
        printf("error opening file!\n");
        return 1;
    }
    getchar();
    printf("enter a line of text to append:");
    fgets(text,sizeof(text),stdin);
    fputs(text,fp);
    fclose(fp);
    printf("text appended successfully!\n");
    return 0;
}
