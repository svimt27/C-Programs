#include<stdio.h>
void main(){
    int n,i;
   int sum=0;
    printf("Enter the number ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum of first %d natural number %d ",n,sum);
}