/**********************************************************
 * ages.c
 *
 * Age people by a year
 *
 * Demonstrates arrays
 **********************************************************/

 #include <stdio.h>
 #include <cs50.h>

 int main(void)
 {
    // determine the number of people
    int n;
    do
    {
        printf("Number of people in the room: ");
        n = GetInt();
    }
    while (n < 1);

    // declare an array in which to store everyone's age
    int ages[n];

    // get everyones age
    for (int i = 0; i < n; i++)
    {
        printf("Age of person #%i ", i + 1);
        ages[i] = GetInt();
    }

    // report everyones age a year hence
    printf("Time passes...\n");
    for (int i = 0; i < n; i++)
    {
        printf("A year from now, person #%i will be %i years old.\n", i + 1, ages[i] + 1);
    }
 }