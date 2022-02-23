#include<stdio.h>
void First();//function prototype

int main()
{
    printf("Outside Function\n");
First();     //Function call
}

void First()   //Function Defination
{
    printf("Inside Function");
}
