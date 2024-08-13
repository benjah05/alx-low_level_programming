#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
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
	Elf64_Ehdr elf_header;

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
	if (memcpy(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", argv[1]);
		close(fd);
		exit(98);
	}
	close(fd);
	return (0);
}
