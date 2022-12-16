#include <stdio.h>

/**
 * main - entry point
 * 
 * Return: 0 Always success
*/

void squeeze(char* s, char c);
int main(void)
{
    char s[] = "Hello cat";
    printf("my string is now %s after squeezing it", squeeze(s, 'c'));
}

/**
 * squeeze - remove all occurences of character c from strings
 * 
 * @s: the string to use
 * @c: the character to remove
 * 
 * Return: nothing (void)
*/
void squeeze(char s[], char c)
{
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
    {
        if(s[i] != c)
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}