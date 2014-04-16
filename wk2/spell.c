#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get a string from the user
    printf("Give me a string: ");
    string str = GetString();
    printf("Length of your string is: %d\n", strlen(str));

    // print each character onto the console
    for (int i = 0, len = strlen(str); i < len; i++)
    {
        printf("%c\n", str[i]);
    }
}