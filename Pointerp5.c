#include<stdio.h>
void main(){
int i=4;
int *ptr;
int **ptr_ptr;
ptr=&i;
ptr_ptr=&ptr;
printf("the value of i is %d\n",**ptr_ptr);
printf("The address of i is %d\n",*ptr);
}