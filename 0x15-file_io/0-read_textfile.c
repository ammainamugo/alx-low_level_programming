#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that reads a text file and prints it to the STDOUT.
 * @filename: Text file to be read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 * 0 when file cannot be opened or read or
 * write to file fails or does not write expected bytes or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t write_text;
	ssize_t read_text;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	read_text = read(fd, buffer, letters);
	write_text = write(STDOUT_FILENO, buffer, read_text);

	free(buffer);
	close(fd);
	return (write_text);
}

