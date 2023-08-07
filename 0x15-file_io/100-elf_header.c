#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_error - Print the error message and exit with status code 98.
 * @error_msg: The error message to print.
 */
void print_error(char *error_msg)
{
	dprintf(2, "%s\n", error_msg);
	exit(98);
}

/**
 * print_elf_header_info - Print the ELF header information.
 * @elf_header: Pointer to the ELF header structure.
 */
void print_elf_header_info(Elf64_Ehdr *elf_header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", elf_header->e_ident[i]);
	printf("\n");

	printf("  Class:                             ");
	if (elf_header->e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (elf_header->e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		print_error("Invalid ELF class");

	printf("  Data:                              ");
	if (elf_header->e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (elf_header->e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		print_error("Invalid ELF data encoding");

	printf("  Version:                           %d (current)\n", elf_header->e_ident[EI_VERSION]);

	printf("  OS/ABI:                            ");
	switch (elf_header->e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_header->e_ident[EI_OSABI]);
	}

	printf("  ABI Version:                       %d\n", elf_header->e_ident[EI_ABIVERSION]);

	printf("  Type:                              ");
	switch (elf_header->e_type)
	{
	case ET_NONE:
		printf("NONE (Unknown type)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("Unknown type\n");
	}

	printf("  Entry point address:               0x%lx\n", (unsigned long)elf_header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		dprintf(2, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Error: Can't open ELF file");

	if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
		print_error("Error: Can't read ELF header");

	if (lseek(fd, (off_t)0, SEEK_SET) == (off_t)-1)
		print_error("Error: Can't perform lseek");

	print_elf_header_info(&elf_header);

	close(fd);

	return (0);
}

