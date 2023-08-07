#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 64

/**
 * error_exit - Prints error messages and exits with status 98.
 * @msg: The error message to be printed.
 */
void error_exit(char *msg)
{
    dprintf(STDERR_FILENO, "%s\n", msg);
    exit(98);
}

/**
 * main - Entry point of the program.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
    int fd, ret;
    unsigned char buf[BUF_SIZE];

    if (argc != 2)
        error_exit("Usage: elf_header elf_filename");

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        error_exit("Error: Can't open ELF file");

    ret = read(fd, buf, BUF_SIZE);
    if (ret == -1)
        error_exit("Error: Can't read from ELF file");
    
    /* Parse and display the ELF header here (the previous code that reads and displays the header).*/

    close(fd);
    return (0);
}

