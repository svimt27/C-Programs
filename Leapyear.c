#include<stdio.h>
void main(){
int year;
printf("Enter the year:");
scanf("%d",&year);
if(year%4==0)
{
  printf("This year is the leap year");
}else
{
    printf("This year is not a leap year");
}
}