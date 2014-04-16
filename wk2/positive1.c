#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;

    do
    {
        printf("I demand a positive integer: ");
        n = GetInt();
    }
    while (n <= 0);

    printf("The integer is %i\n", n);
    return 0;
}
