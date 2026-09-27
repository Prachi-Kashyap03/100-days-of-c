// finding the digit that occurs the most time in an interger
#include<stdio.h>
int main(){
    long long n;
    int digit,count,maxcount=0,maxdigit=0;
    int freq[10]={0};
    printf("enter an integer:");
    scanf("%11d",&n);
    if(n<0)
    n=-n;
    if(n==0)
    freq[0]=1;
    while(n>0){
        digit=n%10;
        freq[digit]++;
        n=n/10;
    }
    for(digit=0;digit<=9;digit++){
        if(freq[digit]> maxcount){
         maxcount =freq[digit];
         maxdigit=digit;
        }
    }
    printf("digit occuring most times =%d\n",maxdigit);
    printf("number of occurences=%d\n",maxcount);
    return 0;
}
