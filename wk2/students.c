#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>

#define NUM 5

int main(void)
{
    // ask user for five names and store them
    string names[NUM];
    for (int i = 0; i < NUM; i++)
    {
        printf("Name %i is: ", i + 1);
        names[i] = GetString();
    }

    for (int i = 0; i < NUM; i++)
    {
        printf("%s\n", names[i]);
    }

    // randomly select a name and print it to console
    srand(time(NULL)); // seed rand with time(NULL) => current time in seconds albeit sth diff
    int name = rand() % NUM; // number will always be less than NUM !
    printf("%s\n", names[name]);
}