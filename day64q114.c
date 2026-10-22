/*Write a program to take a string s as input. 
The task is to find the length of the longest substring without repeating characters. 
Print the length as output.*/
#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int i,j,length,maxlength=0;
    int start,repeated;
    printf("enter a string:");
    scanf("%999s",s);
    length=strlen(s);
    for(i=0;i<length;i++){
        start=i;
        repeated=0;
        for(j=i+1;j<length;j++){
            int k;
            for(k=start;k<j;k++){
                if(s[k]==s[j]){
                    repeated=1;
                    break;
                }
            }
            if(repeated==1){
                break;
            }
        }
        if(j-i>maxlength){
            maxlength=j-i;
        }
    }
    printf("length of longest substring=%d\n",maxlength);
    return 0;
}
