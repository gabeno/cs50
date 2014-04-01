#include <cs50.h>
#include <stdio.h>

int main(void)
{
  printf("Give me a number:\n");
  int x = GetInt();

  printf("Give me another number:\n");
  int y = GetInt();

  printf("The sum of %d and %d is %d\n", x, y, x + y);
}