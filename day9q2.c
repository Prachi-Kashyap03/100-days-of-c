//grade on the basis of percentage
#include<stdio.h>
int main(){
  float percentage;
printf("enter percentage:");
scanf("%f",&percentage);
if(percentage<=90 && percentage<=100)
printf("grade:A");
else if(percentage>=80)
printf("Grade: B");
else if (percentage >=70)
printf("Grade: C");
else if(percentage >=60)
printf("Grade: D");
else if(percentage>=0)
printf("grade:F");
  else
  printf("invalid percentage");
return 0;
}
