#include<stdio.h>
int sum(int a ,int b); //FUnction prototype

void main()
{ 
    int c;
  c= sum( 2,5);//Function call //difference bt parameter and argument is when giving the vale at calling time is known as argument  (2,3) are argument 
                // and at the time of function defination we define the parameter (a,b)are the parameter.
printf("The sum of two numbers %d",c);
}


int sum(int a ,int b){    //function Defination
    int c;
    c=a+b;
    return c;
}