#include<stdio.h>
void sumAndAvg(int a, int b, int *sum, float *avg){
     *sum=a+b;
     *avg=*sum/2;
   
}
void main(){
    int i=2,j=2,sum;
    float avg;
    sumAndAvg(i,j, &sum, &avg);
    printf("The sum of two numbers is:%d\n",sum);
    printf("The avg of two number if %f\n",avg);
}