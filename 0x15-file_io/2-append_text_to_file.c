#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: name of file to create
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int see, print, str = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (str = 0; text_content[str];)
			str++;
	}

	see = open(filename, O_WRONLY | O_APPEND);
	print = write(see, text_content, str);

	if (see == -1 || print == -1)
	{
		return (-1);
	}
	close(see);
	return (1);
}

