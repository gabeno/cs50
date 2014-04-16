/*******************************************************************
* string.c
*
* Gabriel Majivu <gmajivu@gmail.com>
* 
* 
* Prints a given string one character per line.
* 
* Demonstrates strings as arrays of characters and use of strlen.
********************************************************************/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get line of text
    printf("Please give me a string: ");
    string s = GetString();
    
    // print string one character per line
    if (s != NULL) // -> defensive
    {
        for (int i = 0, len = strlen(s); i < len; i++) // cache strlen to improve efficiency
        {
            printf("%c\n", s[i]);
        }
    }
}
