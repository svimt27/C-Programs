#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter the First number:");
    scanf("%d", &a);
    printf("Enter the Second number:");
    scanf("%d", &b);
    printf("Enter the Third number:");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("First number is the greatest");
    }
    else if (b > a && b > c)
    {
        printf("Second number is the greatest");
    }
    else
    {
        printf("Third number is the greatest");
    }
}