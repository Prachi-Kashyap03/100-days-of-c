// display the name of the day of week
#include<stdio.h>
int main(){
  int day;
printf("enter the number(1-7):");
scanf("%d",&day);
switch(day){
case 1:
printf("monday");
break;
case 2:
printf("tuesday");
  break;
case 3:
printf("wednesday");
break;
case 4:
printf("thursday");
break;
case 5:
printf("friday");
break;
case 6:
printf("saturday");
break;
case 7:
printf("sunday");
  default:
    printf("invalid number. please choose number from 1 to 7");
      }
return 0;
}
