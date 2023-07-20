#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - Prints a character.
 * @arg: The argument to print.
 */
void print_char(va_list arg)
{
    printf("%c", va_arg(arg, int));
}

/**
 * print_int - Prints an integer.
 * @arg: The argument to print.
 */
void print_int(va_list arg)
{
    printf("%d", va_arg(arg, int));
}

/**
 * print_float - Prints a float.
 * @arg: The argument to print.
 */
void print_float(va_list arg)
{
    printf("%f", va_arg(arg, double));
}

/**
 * print_string - Prints a string.
 * @arg: The argument to print.
 */
void print_string(va_list arg)
{
    char *str = va_arg(arg, char *);

    if (str == NULL)
        str = "(nil)";

    printf("%s", str);
}

/**
 * print_all - Prints anything.
 * @format: The list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0, j;
    char *separator = "";

    void (*print_fn[])(va_list) = {
        print_char,
        print_int,
        print_float,
        print_string
    };

    char *format_str = (char *)format;

    va_start(args, format);

    while (format_str && format_str[i])
    {
        j = 0;

        while (j < 4)
        {
            if (format_str[i] == "cifs"[j])
            {
                printf("%s", separator);
                print_fn[j](args);
                separator = ", ";
                break;
            }
            j++;
        }

        i++;
    }

    va_end(args);

    printf("\n");
}

