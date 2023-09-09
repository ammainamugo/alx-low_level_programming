#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: Pointer to the name of the file.
 * @text_content: Pointer to the NULL terminated string to add at the end of the file.
 *
 * Return: Function failure or filename is NULL -1 or
 * if the file does not exist the user lacks write permissions
 * Otherwise on success 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, write_text, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (text_len = 0; text_content[text_len];)
			text_len++;
	}

	open_file = open(filename, O_WRONLY | O_APPEND);
	write_text = write(open_file, text_content, text_len);

	if (open_file == -1 || write_text == -1)
		return (-1);

	close(open_file);

	return (1);
}
