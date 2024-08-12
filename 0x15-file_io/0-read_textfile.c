#include "main.h"
/**
 * read_textfile - read a text file and print it to the POSIX stout
 * @filename: the name of the file
 * @letters: number of letters it should read and print
 * Return: number of letters that was read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filePtr;
	char *fileBuff;
	ssize_t readCount, writeCount;

	if (filename == NULL)
		return (0);
	filePtr = open(filename, O_RDONLY);
	if (filePtr == -1)
		return (0);
	fileBuff = malloc(letters * sizeof(char));
	if (fileBuff == NULL)
	{
		free(fileBuff);
		close(filePtr);
		return (0);
	}
	readCount = read(filePtr, fileBuff, letters);
	writeCount = write(STDOUT_FILENO, fileBuff, readCount);
	if (readCount != writeCount)
	{
		free(fileBuff);
		close(filePtr);
		return (0);
	}
	free(fileBuff);
	close(filePtr);
	return (writeCount);
}
