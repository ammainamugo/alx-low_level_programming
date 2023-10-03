#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it to the STDOUT
 * @filename: Text file to be read
 * @letters: Number of letters it should read and print
 * Return: Actual number of letters it could read and print
 * 0 when the file cannot be opened or read or
 * write to file fails or does not write the
 * expected bytes or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *text_buffer;
ssize_t file_descriptor;
ssize_t bytes_written;
ssize_t bytes_read;

file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
return (0);
text_buffer = malloc(sizeof(char) * letters);
bytes_read = read(file_descriptor, text_buffer, letters);
bytes_written = write(STDOUT_FILENO, text_buffer, bytes_read);
free(text_buffer);
close(file_descriptor);
return (bytes_written);
}
