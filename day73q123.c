/*Read a text file and count the total number of characters, words, and lines.
A word is defined as a sequence of non-space characters separated by spaces or newlines.*/
#include<stdio.h>
#include<ctype.h>
int main(){
    FILE *fp;
    int ch,last=0;
    int character=0,words=0,lines=0;
    int inword=0;
    fp=fopen("info.txt","r");
    if(fp==NULL){
        printf("error opening file!\n");
        return 1;
    }
    while((ch=fgetc(fp))!=EOF){
        character++;
        last=ch;
        if(ch=='\n'){
            lines++;
        }
        if(isspace((unsigned char)ch)){
            inword=0;
        }
        else if(inword==0){
            words++;
            inword=1;
        }
    }
    fclose(fp);
    if(character>0&&last!='\n'){
        lines++;
    }
    printf("total characters=%d\n",character);
printf("total words =%d\n",words);
    printf("total lines=%d\n",lines);

return 0;
}
