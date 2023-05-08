#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_txt, print, str = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (str = 0; text_content[len];)
			str++;
	}
	file_txt = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	print = write(file_txt, text_content, str);

	if (file_txt == -1 || print == -1)
	{
		return (-1);
	}
	close(file_txt);
	return (1);
}

