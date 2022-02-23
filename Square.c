#include <stdio.h>
int main()
{
    int area, side;
    printf("Area of side is:");
    scanf("%d", &side);
    area = (side * side);
    printf("Area of square is:%d", area);
    return 0;
}