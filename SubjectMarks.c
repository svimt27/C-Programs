#include<stdio.h>
int main(){
    int e,m,p,c,h,sum;
    float average;
    printf("Enter mark of English:");
    scanf("%d",&e);
    printf("Enter mark of Math:");
    scanf("%d",&m);
    printf("Enter marks of Physics:");
    scanf("%d",&p);
    printf("Enter marks of Chemistery:");
    scanf("%d",&c);
    printf("Enter marks of Hindi:");
    scanf("%d",&h);
    sum=e+m+p+c+h;
    printf("Sum of all numbers:%d",sum);
    average=(e+m+p+c+h)/5;
    printf("\nThe average of numbers:%f",average);
    return 0;

}