#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get valid input
    int height;
    
    do
    {
        printf("Height: ");
        height = GetInt();

        if (height == 0)
        {
            break;
        }
    }
    while (height < 0 || height > 23);


    // compute and print blocks
    int i;
    int j;
    int k;

    for (i = 0; i < height; i++)
    {
        // print spaces
        for (j = 1; j < height - i; j++)
        {
            printf(" ");
        }

        // print hashes
        for (k = 0; k < i + 2; k++)
        {
            printf("#");
        }

        // print newline
        printf("\n");
    }

    return 0;
}
