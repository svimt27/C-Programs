#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("Eneter a number ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("The sum of first %d even number %d ", n, sum);
}