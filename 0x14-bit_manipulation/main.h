#ifndef MAIN_H
#define MAIN_H

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is an invalid char or b is NULL.
 */
int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
int _putchar(char c);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);

#endif /* MAIN_H */

