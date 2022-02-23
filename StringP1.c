#include <stdio.h>
#include <string.h>
void main()
{
    char st1[34];
    char st2[34];
    char *ptr = st2;
    printf("Enter the first string:\n");
    scanf("%s", &st1);
    printf("Enter the second string:\n");
    while (*ptr != '\0')
    {
        scanf("%c", &st2);
        ptr++;
    }
    printf("Enter the first string:%s\n", &st1);
    printf("Enter the second string:%c\n", &ptr);
    printf("Comparasion of first and second string:%d", strcmp(st1, ptr));
}