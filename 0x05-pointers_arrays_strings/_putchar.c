#include <unistd.h>

/**
 * _putchar - writes the string str to stdout
 * @str: string to print
 * Return: void
 */

int _putchar(char str)
{
    if (str == NULL)
        return 0;

    for (int i = 0; str[i] != '\0'; i++)
       _ putchar(str[i]);

   _putchar('\n');
}
