#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @s: Pointer to the string
 * Return: Length of the string
 */
int _strlen(char *s)
{
  int length = 0;

  while (*s != '\0')
  {
    length++;
    s++;
  }

  return length;
}

/**
 * puts_half - Prints the second half of a string
 * @str: Pointer to the string
 */
void puts_half(char *str)
{
  int length = _strlen(str);
  int start_index = length % 2 == 0 ? length / 2 : (length - 1) / 2;
  int i;

  for (i = start_index; i < length; i++)
  {
    _putchar(str[i]);
  }

  _putchar('\n');
}

