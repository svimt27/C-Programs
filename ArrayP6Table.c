#include <stdio.h>
void mulTable(int *arr, int n)
{
    printf("The Multiplication table of %d\n",n);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d*%d = %d\n",n,i + 1, arr[i]);
    }
    printf("****************************\n\n");
}
void main()
{
    int n;
    int arr[3][10];
    printf("Eneter the number ");
    scanf("%d",&n);
    mulTable(arr[0],n);
    //mulTable(arr[1],7);
    //mulTable(arr[2],9);
}