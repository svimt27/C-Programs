#include<stdio.h>
int main(){
    int f=0,s=1,next,n,i;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonacci Series is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",f);
        if(n<=1){
            return 1;
        }
        else{
            next=f+s;
            f=s;
            s=next;
        }
  }
    return 0;
}