/*Write a C program that creates a text file named info.
txt in write mode. 
The program should take the user’s name and age as input, and
write them to the file using fprintf(). 
After writing, display a message confirming that the data was successfully saved.*/
#include<stdio.h>
int main(){
    FILE *fp;
    char name[100];
    int age;
    fp=fopen("info.txt","w");
    if(fp==NULL){
        printf("error opening file.\n");
        return 1;
    }
    printf("enter your name:");
    scanf(" %99[^\n]",name);
    printf("enter your age:");
    scanf("%d",&age);
    fprintf(fp,"name:%s\n",name);
    fprintf(fp,"age:%d\n",age);
    fclose(fp);
    printf("data successfully saved to info.txt\n");
    return 0;
}
