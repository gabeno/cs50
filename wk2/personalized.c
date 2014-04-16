#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    // take a users full name
    // two and only two cli arguments
    if (argc != 3)
    {
        return 1;
    }
    // print out a greeting that includes their first name
    printf("Hello there %s!\n", argv[1]);
}