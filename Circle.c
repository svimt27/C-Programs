#include<stdio.h>
int main(){
    int r;
    float circle,perimeter;
    printf("Enter the radius r=");
    scanf("%d",&r);
    circle=(3.14*r*r);
printf("Area of circle is:%f",circle);
perimeter=(2*3.14*r);
printf("\nPerimeter of circle:%f",perimeter);
    return 0;
}