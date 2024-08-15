#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/*----------- ELF task------------- */
#define MAG_NO 4

void print_magic(unsigned char *e_ident);
void print_class(unsigned char e_class);
void print_data(unsigned char e_data);
void print_version(unsigned int e_version);
void print_osabi(unsigned char *e_ident);
void print_abi_version(unsigned char *e_ident);
void print_type(unsigned int e_type);
void print_entry(unsigned long int e_entry);
/**
 * struct elf_head - ELF header structure
 * @id: identification bytes
 * @version: ELF version
 * @type: file type
 * @entry: address of the entry point
 */
typedef struct elf_head
{
	unsigned char id[EI_NIDENT];
	uint16_t version;
	uint16_t type;
	uint16_t entry;
} MyElfHeader;

#endif
