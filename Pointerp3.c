#include <stdio.h>
void change(int *a)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("The value of the variable a %d\n",a);
    }
}
void main()
{
    int a;
      change(&a);
}