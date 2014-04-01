#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int pad;
    int h;
    int i;
    int j;
    int k;

    // get valid input
    while (true)
    {
        printf("Height: ");
        h = GetInt();
        
        if (h > 0 && h <= 23)
        {
            break;
        }
    }

    // compute and print blocks
    for (i = 1; i <= h; i++) // layer
    {
        pad = h - i;

        // printf("Height: %i, Pad: %i\n", i, pad);
        
        for (k = 0; k < pad; k++) // space
        {
            printf(" ");
        }

        for (j = 0; j < i; j++) // block
        {
            printf("#");
        }

        printf("#\n");
    }
}
