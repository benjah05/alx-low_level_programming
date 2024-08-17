#include "main.h"
/**
 * print_version - find out the version of the ELF file
 * @elf_id: identification bytes for the ELF file
 * Return: void
 */
void print_version(unsigned char *elf_id)
{
	printf("  Version:                           %d", elf_id[EI_VERSION]);
	if (elf_id[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}
/**
 * print_osabi - find the OSABI(OS Application Binary Interface) of an ELF
 * @elf_id: identification bytes for the ELF file
 * Return: void
 */
void print_osabi(unsigned char *elf_id)
{
	printf("  OS/ABI:                            ");
	switch (elf_id[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		default:
			printf("<Unknown : %d>\n", elf_id[EI_OSABI]);
	}
}
/**
 * print_abi_version - find out the ABI version of an ELF
 * @elf_id: identification bytes of an ELF file
 * Return: void
 */
void print_abi_version(unsigned char *elf_id)
{
	printf("  ABI Version:                       %d\n", elf_id[EI_ABIVERSION]);
}
/**
 * print_type - inddicate ELF type(relocatable, executable, etc.)
 * @elf_type: elf type that represent how the file is processed
 * @elf_id: elf identification
 * Return: void
 */
void print_type(unsigned int elf_type, unsigned char *elf_id)
{
	if (elf_id[EI_DATA] == ELFDATA2MSB)
		elf_type = (elf_type >> 8);
	printf("  Type:                              ");
	switch (elf_type)
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
			printf("<Unknown: %d>\n", elf_type);
	}
}
/**
 * print_entry - find the entry point of the ELF file
 * @entry_address: argument that represent where the ELF starts
 * @elf_id: elf identification
 * Return: void
 */
void print_entry(unsigned long int entry_address, unsigned char *elf_id)
{
	printf("  Entry point address:               ");
	if (elf_id[EI_DATA] == ELFDATA2MSB)
	{
		entry_address = ((entry_address >> 24) & 0x000000FF) |
			((entry_address >> 8) & 0x0000FF00) |
			((entry_address << 8) & 0x00FF0000) |
			((entry_address << 24) & 0xFF000000);
	}
	if (elf_id[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry_address);
	else
		printf("%#lx\n", entry_address);
}
