#include "main.h"
/**
 * append_text_to_file - append text at the end of a file
 * @filename: the name of the file
 * @text_content: text to append to the eof
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, len = 0, writeCount;

	if (filename == NULL)
		return (-1);
	file = access(filename, R_OK | W_OK);
	if (file == -1)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		writeCount = write(file, text_content, len);
		if (writeCount == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
