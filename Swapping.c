#include<stdio.h>
int main(){
int a,b;
printf("Enter first number a:");
scanf("%d",&a);
printf("Enter second number b:");
scanf("%d",&b);
a=a+b;//a=10,b=20(10+20=30)
b=a-b;//(30-20=10)
a=a-b;//(30-10=20)
printf("After swapping a=%d b=%d",a,b);
    return 0;
}