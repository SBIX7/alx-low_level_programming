#include <ctype.h>
#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @n: Input string.
 *
 * Return: Capitalized string.
 */
char *cap_string(char *n)
{
    int i = 0;

    while (n[i] != '\0')
    {
        if (n[i] == ',' || n[i] == ';' || n[i] == '.' || n[i] == '!' ||
            n[i] == '?' || n[i] == '"' || n[i] == '(' || n[i] == ')' ||
            n[i] == '{' || n[i] == '}' || n[i] == ' ' || n[i] == '\t' || n[i] == '\n')
        {
            if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
            {
                n[i + 1] = toupper(n[i + 1]);
            }
        }
        i++;
    }

    return (n);
}
