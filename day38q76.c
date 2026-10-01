//check if a matrix is symmetric
#include<stdio.h>
int main(){
    int a[10][10],r,c,i,j;
    int flag=1;
    printf("enter no. of rows:");
    scanf("%d",&r);
    printf("enter no. of columns:");
    scanf("%d",&c);
    if(r!=c){
        printf("matrix is not symmetric");
        return 0;
    }
    printf("enter matrix elements:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);}
        }
            for(i=0;i<r;i++){
                for(j=0;j<c;j++){
            if(a[i][j]!=a[i][j]){
                flag=0;
                break;
            }
        }
        if(flag==0){
            break;
        }
    }
    if(flag==1){
        printf("matrix is symmetric");
    }
    else{
        printf("matrix is not symmetric");
    }
    return 0;
}
