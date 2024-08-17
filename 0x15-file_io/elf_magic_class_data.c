#include "main.h"
/**
 * print_magic - print the magic number
 * @elf_id: pointer to ELF header that contain the magic number
 * that identifies the file as an ELF
 * Return: void
 */
void print_magic(unsigned char *elf_id)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", elf_id[i]);
		if (i < EI_NIDENT - 1)
			_putchar(" ");
	}
	printf("\n");
}
/**
 * print_class - print the architecture class of an ELF
 * @bit_class: represent 32-bit or 64-bit
 * Return: void
 */
void print_class(unsigned char bit_class)
{
	printf("  Class:                             ");
	if (bit_class == ELFCLASSNONE)
		printf("None\n");
	else if (bit_class == ELFCLASS32)
		printf("ELF32\n");
	else if (bit_class == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("Invalid class\n");
}
/**
 * print_data - find out whether the architecture uses big or little endian
 * @data_encoding: argument that indicates the data encoding of the ELF
 * Return: void
 */
void print_data(unsigned char data_encoding)
{
	printf("  Data:                              ");
	if (data_encoding == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (data_encoding == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("Invalid data encoding\n");
}
