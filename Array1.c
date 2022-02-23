#include <stdio.h>
void main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of the marks%d ",i+1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The values of the marks%d is %d\n",i+1,marks[i]);
    }
}