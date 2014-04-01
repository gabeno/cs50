#include <cs50.h>
#include <stdio.h>

int main(void)
{
  string name;
  printf("What's ya name yo?");
  name = GetString();
  printf("Hi there, %s\n", name);
}
