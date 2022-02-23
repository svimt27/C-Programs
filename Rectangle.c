#include <stdio.h>
int main()
{
    int area,w,l;
    printf("Enter width of area w=");
    scanf("%d", &w);
     printf("Enter length of area l=");
    scanf("%d", &l);
    area=(w*l);
    printf("Area of rectangle is:%d", area);
    return 0;
}