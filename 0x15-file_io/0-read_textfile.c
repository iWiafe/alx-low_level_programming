#include "main.h"
#include <stddef.h>

/**
 * read_textfile - a function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: name of text file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, m_read, print;
	char *buff = malloc(sizeof(*buff) * (letters + 1));

	if (filename == NULL || buff == NULL)
	{
		free(buff);
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	m_read = read(file, buff, letters);
	if (m_read == -1)
	{
		return (0);
	}
	buff[m_read] = '\0';
	print = write(STDOUT_FILENO, buff, m_read);
	if (print != m_read)
	{
		return (0);
	}
	free(buff);
	close(file);
	return (m_read);
}
