#include<stdio.h>
void main(){
    int arr[10];
    int *ptr;
    ptr=&arr[0];
    if(ptr+2==&arr[2]){
        printf("Pointer points to the same memory location");
    } else
    {
        printf("Pointer do not points to the same memory location");
    }
    
}