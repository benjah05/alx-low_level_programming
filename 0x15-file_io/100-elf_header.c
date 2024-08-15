#include "main.h"
#include "elf_magic_class_data.c"
#include "elf_version_osabi_abi.c"
/**
 * main - display information contained in the ELF header
 * at the start of an ELF file
 * @argc: number of CL arguments
 * @argv: argument vector(an array of CL arguments)
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd;
	MyElfHeader elf_header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant open file %s\n", argv[1]);
		exit(98);
	}
	if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
	{
		dprintf(STDERR_FILENO, "Error: Can't read ELF header\n");
		close(fd);
		exit(98);
	}
	if (memcmp(elf_header.id, MAG, MAG_NO) != 0)
	{
		dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", argv[1]);
		close(fd);
		exit(98);
	}
	print_magic(elf_header.id);
	print_class(elf_header.id[EI_CLASS]);
	print_data(elf_header.id[EI_DATA]);
	print_version(elf_header.version);
	print_osabi(elf_header.id);
	print_abi_version(elf_header.id);
	print_type(elf_header.type);
	print_entry(elf_header.entry);
	close(fd);
	return (0);
}
