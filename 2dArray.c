#include <stdio.h>
void main()
{
int n_student=3;
int n_subject=5;
    int marks[3][5];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
        {
            printf("Enter the value of student%d and marks%d ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
        {
            printf("Enter the value of student%d and marks%d is:%d\n", i + 1, j + 1, marks[i][j]);
        }
}