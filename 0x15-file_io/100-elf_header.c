#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - a function that checks if a file is an ELF file.
 * @e_ident: pointer containing the ELF magic numbers.
 * note: exit code 98 if the file is not an ELF file
 * Return: nothing
 */
void check_elf(unsigned char *e_ident)
{
	int position;

	for (position = 0; position < 4; position++)
	{
		if (e_ident[position] != 127 &&
			e_ident[position] != 'E' &&
			e_ident[position] != 'L' &&
			e_ident[position] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - a function that prints the magic numbers of an ELF header.
 * @e_ident: pointer containing the ELF magic numbers.
 * note: numbers are separated by spaces.
 * Return: nothing
 */
void print_magic(unsigned char *e_ident)
{
	int position;

	printf("  Magic:   ");

	for (position = 0; position < EI_NIDENT; position++)
	{
		printf("%02x", e_ident[position]);

		if (position == EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
}

/**
 * print_class - a function that prints the class of an ELF header.
 * @e_ident: pointer containing the ELF class.
 * Return: nothing.
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - a function that prints the data of an ELF header.
 * @e_ident: pointer containing the ELF class.
 * Return: nothing
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_version - a function that prints the version of an ELF header.
 * @e_ident: pointer containing the ELF version.
 * Return: nothing
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
		   e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osabi - a function that prints the OS/ABI of an ELF header.
 * @e_ident: pointer containing the ELF version.
 * Return: nothing
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
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
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi - a function that prints the ABI version of an ELF header.
 * @e_ident: pointer  containing the ELF ABI version.
 * Return: nothing
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
		   e_ident[EI_ABIVERSION]);
}

/**
 * print_type - a function that prints the type of an ELF header.
 * @e_type: ELF type.
 * @e_ident: pointer containing the ELF class.
 * Return: nothing
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
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
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - a function that prints the entry point of an ELF header.
 * @e_entry: ELF entry point address
 * @e_ident: pointer with the ELF class.
 * Return: nothing
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
				  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e_entry);
	}
	else
	{
		printf("%#lx\n", e_entry);
	}
}

/**
 * close_elf - a function that closes an ELF file.
 * @elf: name of the ELF file.
 * note: exit code 98. if the file cannot be closed
 * Return: nothing
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);

		exit(98);
	}
}

/**
 * main - a program that Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: number of arguments.
 * @argv: Augument vector.
 * note: exit code 98 if file is not an ELF file
 * Return: 0 on success.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *head = malloc(sizeof(Elf64_Ehdr));
	int print, see;

	print = open(argv[1], O_RDONLY);
	if (print == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	if (head == NULL)
	{
		close_elf(print);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	see = read(print, head, sizeof(Elf64_Ehdr));
	if (see == -1)
	{
		free(head);
		close_elf(print);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	check_elf(head->e_ident);
	printf("ELF Header:\n");
	print_magic(head->e_ident);
	print_class(head->e_ident);
	print_data(head->e_ident);
	print_version(head->e_ident);
	print_osabi(head->e_ident);
	print_abi(head->e_ident);
	print_type(head->e_type, head->e_ident);
	print_entry(head->e_entry, head->e_ident);

	free(head);
	close_elf(print);
	return (0);
}
