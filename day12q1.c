// calculate library fine
#include<stdio.h>
int main(){
int days;
  float fine=0;
printf("enter no. of late days:");
scanf("%d",&days);
if(days<=5){
fine=days*2;
printf("fine=Rs.%.2f",fine);
}
else if(days<=10){
  fine=(5*2)+((days-5)*4);
printf("fine=Rs.%.2f",fine);}
else if (days<=20){
fine=(5*2)+(5*4)+((days-10)*6);
printf("fine=Rs.%.2f",fine);
}
else{
printf{"membership cancelled");
}
return 0;
}
