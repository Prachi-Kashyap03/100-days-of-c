// find the month name and no. of days
#include<stdio.h>
int main(){
  int month;
printf("enter the number(1-12):");
scanf("%d",&month);
switch(month)(
  case 1:
printf("january=31 days");
break;
case 2:
printf("februray=28 days");
break;
case 3:
printf("march=31 days");
break;
case 4:
printf("april=30 days");
break;
case 5:
printf("may=31 days");
break;
case 6:
printf("june=30 days");
break;
case 7:
printf("july=31 days");
break;
case 8:
printf("august=31 days");
break;
case 9:
printf("september=30 days");
break;
case 10:
printf("october=31 days");
break;
case 11:
printf("november=30 days");
break;
case 12:
printf("december=31 days");
break;
  default:
    printf("invalid number. choose the number between 1 to 12");
}
return 0;
}
