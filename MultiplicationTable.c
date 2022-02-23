#include <Stdio.h>
void main()
{
    int n,mul;
    printf("Enter the table number ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        mul=n*i;
    printf("%d * %d =%d\n",n,i,mul);
}
}