#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess,attempt=1;
    srand(time(0));
    number = rand() % 100 + 1; //Generate a number between 1 to 100;
   // printf("The number is%d\n", number);
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Choose low number\n");
        }
        else if (guess < number)
        {
            printf("Choose high number\n");
        }
        else
        {
            printf("You gussed it in %d attempts\n",attempt);
        }
        attempt++;
    } while (guess != number);

    return 0;
}