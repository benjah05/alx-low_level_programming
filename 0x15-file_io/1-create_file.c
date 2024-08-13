#include "main.h"
/**
 * create_file - create a file
 * @filename: the name of file
 * @text_content: the string to write in new file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int filePtr, count = 0, writeCount;

	if (filename == NULL)
		return (-1);
	filePtr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (filePtr == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
		writeCount = write(filePtr, text_content, count);
		if (writeCount == -1)
		{
			close(filePtr);
			return (-1);
		}
	}
	close(filePtr);
	return (1);
}
