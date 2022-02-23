#include<stdio.h>
void main(){
    int i=3;
    int *j=&i;
    printf("The address of the variable is %u \n",&j);
    printf("The value of the variable is %d \n",*j);
}