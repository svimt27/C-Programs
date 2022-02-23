#include<Stdio.h>
int main(){
int a,b,temp;
printf("Enter the first number a=");
scanf("%d",&a);
printf("Enter the second number b=");
scanf("%d",&b);
temp=b;
b=a;
a=temp;
printf("After swapping a=%d b=%d",a,b);
 return 0;

}