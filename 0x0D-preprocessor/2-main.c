/**
 * main - Entry point of the program
 *
 * Description: Prints the name of the file it was compiled from, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

#define UNUSED(x) (void)(x)

int main(void)
{
    UNUSED(__BASE_FILE__);

    printf("%s\n", __FILE__);

    return (0);
}

