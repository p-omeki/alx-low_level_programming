#include "main.h"

/**
 * puts2 - Prints every other character of a string starting with the first character
 * @str: Pointer to the string
 */
void puts2(char *str)
{
    int i = 0;
    int count = 0;

    while (*(str + i) != '\0' && count < 224)
    {
        _putchar(*(str + i));
        i += 2;
        count++;
    }

    _putchar('\n');
}

