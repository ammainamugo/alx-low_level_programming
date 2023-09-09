#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: Pointer to the name of the file to create
 * @text_content: Pointer to a NULL terminated string to write to the file
 *
 * Return: 1 on success
 * -1 if file can not be created, written, write fails, etc
 * or if filename is NULL return
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_text, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (text_len = 0; text_content[text_len];)
			text_len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_text = write(fd, text_content, text_len);

	if (fd == -1 || write_text == -1)
		return (-1);

	close(fd);

	return (1);
}
