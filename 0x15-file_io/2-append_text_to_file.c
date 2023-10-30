#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 on success, -1 if the function fails or filename is NULL and
 * -1 If the file does not exist the user lacks write permissions
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wc, len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}
	fd = open(filename, O_WRONLY | O_APPEND, 0664);
	if (fd == -1)
		return (-1);
	wc = write(fd, text_content, len);
	if (wc == -1)
		return (-1);
	close(fd);
	return (1);
}
