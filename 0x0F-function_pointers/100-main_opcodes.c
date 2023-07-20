#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    int i, bytes;

    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }

    bytes = atoi(argv[1]);
    if (bytes < 0)
    {
        printf("Error\n");
        exit(2);
    }

    /* Retrieve the address of the main function */
    unsigned char *main_addr = (unsigned char *)main;

    /* Print the opcodes of the main function */
    for (i = 0; i < bytes; i++)
    {
        printf("%02x ", main_addr[i]);
    }
    printf("\n");

    return (0);
}

