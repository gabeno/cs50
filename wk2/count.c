#include <stdio.h>

int main(void)
{
    // create an array of integers 1 through 5
    int nums[5] = {1, 2, 3, 4, 5};

    // print out each int on a new line
    for (int i = 0; i < 5; i++) {
        printf("%d\n", nums[i]);
    }
}