#include "main.h"
/**
 * print_version - find out the version of the ELF file
 * @version_no: the version number of the ELF
 * Return: void
 */
void print_version(unsigned int version_no)
{
	printf("Version:                           %d (current)\n", version_no);
}
/**
 * print_osabi - find the OSABI(OS Application Binary Interface) of an ELF
 * @elf_id: identification bytes for the ELF file
 * Return: void
 */
void print_osabi(unsigned char *elf_id)
{
	printf("OS/ABI:                            ");
	switch (elf_id[EI_OSABI])
	{
		case 0:
			printf("UNIX - System V\n");
			break;
		case 2:
			printf("UNIX - NetBSD\n");
			break;
		case 6:
			printf("UNIX - Solaris\n");
			break;
		default:
			printf("<Unknown : %d>\n", elf_id[EI_OSABI]);
			break;
	}
}
/**
 * print_abi_version - find out the ABI version of an ELF
 * @elf_id: identification bytes of an ELF file
 * Return: void
 */
void print_abi_version(unsigned char *elf_id)
{
	printf("ABI Version:                       %d\n", elf_id[EI_ABIVERSION]);
}
/**
 * print_type - inddicate ELF type(relocatable, executable, etc.)
 * @elf_type: elf type that represent how the file is processed
 * Return: void
 */
void print_type(unsigned int elf_type)
{
	printf("Type:                              ");
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
			printf("Unknown type\n");
			break;
	}
}
/**
 * print_entry - find the entry point of the ELF file
 * @entry_address: argument that represent where the ELF starts
 * Return: void
 */
void print_entry(unsigned long int entry_address)
{
	printf("Entry point address:               0x%lx\n", entry_address);
}
