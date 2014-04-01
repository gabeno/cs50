#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // get user input
    float input;
    int change;
    int coins = 0;

    do
    {
        printf("O hai! How much change is owed? ");
        input = GetFloat();
    }
    while(input < 0);


    // calculate number of coins to return
    change = round(input * 100);

    while (change > 0)
    {
        if (change / 100 > 0)
        {
            // coins += (change / 100);
            change = (change % 100);
        }

        if (change / 25 > 0)
        {
            coins += (change / 25);
            change = (change % 25);
        }

        if (change / 10  > 0)
        {
            coins += (change / 10);
            change = (change % 10);
        }

        if (change / 5 > 0)
        {
            coins += (change / 5);
            change = (change % 5);
        }

        if (change / 1 > 0)
        {
            coins += (change / 1);
            change = (change % 1);
        }
    }

    printf("%i\n", coins);
}