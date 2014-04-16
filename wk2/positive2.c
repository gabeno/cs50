#include <cs50.h>
#include <stdio.h>

int GetPositiveInt(void);

int main(void)
{
    int n = GetPositiveInt();
    printf("The integer is %i\n", n);
}

int GetPositiveInt(void)
{
    int n;

    do
    {
        printf("Give me a positive integer: ");
        n = GetInt();
    }
    while (n <= 0);

    return n;
}
