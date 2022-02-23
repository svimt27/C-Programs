#include<stdio.h>
void main(){
    int i=34;
    int *j=&i;
    printf("The value of i is %d\n",i);
    printf("The value of i is%d\n",*j);  
    printf("The address of i is%u\n",&i);
    printf("The value of i is%u\n",*(&i));  
 printf("The value of j is%u\n",*(&j));
}