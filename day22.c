//find profit and loss percentage
#include<stdio.h>
int main(){
  float sp,cp,loss,profit,percentage;
printf("enter cost price:");
  scanf("%f",&cp);
printf("enter selling price:");
scanf("%f",&sp);
if(sp>cp){
  profit=sp-cp;
percentage=(profit/cp)*100;
printf("profit=%.2f\n",profit);
printf("profit percentage=%.2f%%",percentage);
}
else if(cp>sp){
loss=cp-sp;
percentage=(loss/cp)*100;
printf("loss=%.2f\n",loss);
printf("loss percentage=%.2f%%",percentage);
}
else{
printf("no profit,no loss");
}
return 0;
}
