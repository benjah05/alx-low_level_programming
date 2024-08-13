#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * cp_file_from_to - copy one the content of a file into another
 * @file_from: original file
 * @file_to: file to copy content into
 * Return: void, exit upon failure
 */
void cp_file_from_to(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	char buffer[1024];
	long int readCount, writeCount;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd_from);
		exit(99);
	}
	while ((readCount = read(fd_from, buffer, sizeof(buffer))) != 0)
	{
		writeCount = write(fd_to, buffer, readCount);
		if (writeCount == -1 || writeCount != readCount)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_from);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}
/**
 * main - get command-line arguments containing
 * file_from and file_to
 * @argc: number of CL arguments
 * @argv: array containing all CL arguments
 * Return: 0, exit 97 in case of failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_file_from_to(argv[1], argv[2]);
	return (0);
}
