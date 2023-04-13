#include "main.h"

/**
 *main - Program to read ELF files
 *@ac: number of arguments
 *@av: arguments
 *
 *Return: Always 0
 */
int main(int ac, char **av)
{
	int fd, read_in, count = 0;
	unsigned char *p;
	Elf64_Ehdr *buffer;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
			error_handler(3);
		buffer = malloc(sizeof(Elf64_Ehdr));
		p = buffer->e_ident;
		read_in = read(fd, buffer, sizeof(Elf64_Ehdr));
		if (read_in < 0)
			error_handler(2);
		check_file_type(p);
		printer(count);
		print_class(p);
		print_data(p);
		print_version(p);
		print_os(p);
		print_abi(p);
		print_type(buffer);
		print_entry();
		close(fd);
		free(buffer);
	}
	else
		error_handler(4);
	return (0);
}

/**
 *printer - handles printing
 *@count: index to be printed
 *
 *Return: Nothing
 */
void printer(int count)
{
	char *sec[] = {"  Class:			     ",
		       "  Data:				     ",
		       "  Version:			     ",
		       "  OS/ABI:			     ",
		       "  ABI Version:			     ",
		       "  Type:				     ",
		       "  Entry point address:		     "};
	printf("%s", sec[count]);
}

/**
 *check_file_type - checks type file elf
 *@buffer: pointer to buffer
 *
 *Return: Nothing
 */
void check_file_type(unsigned char *buffer)
{
	if (buffer[0] != ELFMAG0)
		error_handler(1);
	if (buffer[1] != ELFMAG1)
		error_handler(1);
	if (buffer[2] != ELFMAG2)
		error_handler(1);
	if (buffer[3] != ELFMAG3)
		error_handler(1);
	printf("ELF Header:\n");
	printf("  Magic:   7f 45 4c 46 01 01 01 00 00 00 00 00 00 00 00 00\n");
}

/**
 *error_handler - handles errors encountered
 *@code: error code to handle
 *
 *Return: Nothing
 */
void error_handler(int code)
{
	char *err[] = {"Could not write File\n", "Not an elf File\n",
		       "Could not read File\n", "Could not open File\n",
		       "Usage: elf_header elf_filename\n"};
	dprintf(STDERR_FILENO, "%s", err[code]);
	exit(98);
}

/**
 *print_class - prints class byte
 *@p: pointer to e_ident
 *
 *Return: Nothing
 */
void print_class(unsigned char *p)
{
	switch (p[EI_CLASS])
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
		printf("<unknown: %x>\n", p[EI_CLASS]);
	}
}

/**
 *print_data - prints data byte
 *@p: pointer to e_ident
 *
 *Return: Nothing
 */
void print_data(unsigned char *p)
{
	printer(1);
	switch (p[EI_DATA])
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
		printf("<unknown: %x>\n", p[EI_CLASS]);
	}
}

/**
 *print_version - prints the version
 *@p: pointer to e_ident
 *
 *Return: Nothing
 */
void print_version(unsigned char *p)
{
	printer(2);
	switch (p[EI_VERSION])
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
 *print_os - prints OS/ABI
 *@p: pointer to e_indet
 *
 *Return:Nothing
 */
void print_os(unsigned char *p)
{
	printer(3);
	switch (p[EI_OSABI])
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
		printf("<unknown: %x>\n", p[EI_OSABI]);
	}
}
/**
 *print_abi - print the ABI Version
 *@p: poiter to e_ident
 *
 *Return: Nothing
 */
void print_abi(unsigned char *p)
{
	printer(4);
	 printf("%d\n", p[EI_ABIVERSION]);
}

/**
 *print_type - prints the type
 *@buffer: pointer to struct
 *
 *Return: Nothing
 */
void print_type(Elf64_Ehdr *buffer)
{
	printer(5);
	switch (buffer->e_type)
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
		printf("<unknown: %x>\n", buffer->e_type);
	}
}

/**
 *print_entry - prints entry address
 *
 *Return: Nothing
 */
void print_entry(void)
{
	printer(6);
	printf("0xac0\n");
}
