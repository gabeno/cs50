#include <cs50.h>
#include <stdio.h>

int main(void)
{
  printf("Choose a number:\n");
  int n = GetInt();

  if (n < 0)
  {
    printf("Your number is negative\n");
  }
  else if (n == 0)
  {
    printf("Your number is zero\n");
  }
  else
  {
    printf("Your number is positive\n");
  }
}