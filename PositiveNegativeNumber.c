#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter the value of a=");
    scanf("%d", &a);
    printf("Eneter the value of b=");
    scanf("%d", &b);
    printf("Eneter the value of c=");
    scanf("%d", &c);
    if (a > 0 && b > 0 && c > 0){
        printf("%d,%d,%d Numbers are positive",a,b,c);
    } else{
        printf("%d,%d,%d Numbers are Negative",a,b,c);
    }
    
}