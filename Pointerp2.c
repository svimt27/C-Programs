#include<stdio.h>
void printAdd(int a){
    printf("The address of the variable in a function is %u\n",&a);
}
void main(){
    int i;
    printf("The address of the variable is %u\n",&i);
    printAdd(i);
}