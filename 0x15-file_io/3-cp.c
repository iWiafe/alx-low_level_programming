#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void verify_IO_stat(int stat, int fd, char *filename, char mode);

/**
 * main - a function that copies the content of a file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 on success, otherwise exit
 */
int main(int argc, char *argv[])
{
	int ptr, des, num = 1024, print, close_ptr, close_des;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	ptr = open(argv[1], O_RDONLY);
	verify_IO_stat(ptr, -1, argv[1], 'O');
	des = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	verify_IO_stat(des, -1, argv[2], 'W');
	while (num == 1024)
	{
		num = read(ptr, buffer, sizeof(buffer));
		if (num == -1)
			verify_IO_stat(-1, -1, argv[1], 'O');
		print = write(des, buffer, num);
		if (print == -1)
			verify_IO_stat(-1, -1, argv[2], 'W');
	}
	close_ptr = close(ptr);
	verify_IO_stat(close_ptr, ptr, NULL, 'C');
	close_des = close(des);
	verify_IO_stat(close_des, des, NULL, 'C');
	return (0);
}

/**
 * verify_IO_stat - a function taht verifies if a file can be opened or closed
 * @stat: descriptor of the file to be opened
 * @filename: file name
 * @mode: close or open
 * @fd: file descriptor
 * Return: nothing
 */
void verify_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(99);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
}

