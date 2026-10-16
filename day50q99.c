//chnage the date format from dd/04/yyyy to dd-Apr-yyyy
#include<stdio.h>
int main(){
    char date[11];
    char month[13][4]={"","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int day,mon,year;
    printf("enter date(dd/mm/yyyy):");
    scanf("%10s",date);
    if(sscanf(date,"%d/%d/%d",&day,&mon,&year)!=3||
    day<1||day>31||mon<1||mon>12||year<1)
    {
        printf("Invalid date format.\n");
        return 0;
    }
    printf("formatted date:%02d-%s-%04d\n",day,month[mon],year);
    return 0; 
    }
