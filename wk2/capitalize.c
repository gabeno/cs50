/********************************************************************
* capitalize.c
*
* Gabriel Majivu <gmajivu@gmail.com>
*
* Capitalize a given string
*
* Demonstrates casting and iteration over strings as arrays of chars
**********************************************************************/

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get line of text
    string s = GetString();

    // capitalize text
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
        // if (islower(s[i])) 
        // // if (s[i] >= 'a' && s[i] <= 'z')
        // {
        //     printf("%c", toupper(s[i]));
        //     // printf("%c", s[i] - ('a' - 'A'));
        // }
        // else
        // {
        //     printf("%c", s[i]);
        // }
    }
    printf("\n");
}