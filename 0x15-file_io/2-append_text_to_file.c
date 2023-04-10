#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 *
 * @filename: Name of the file.
 * @text_content: NULL terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written_chars, i;

	if (filename == NULL)
		return (-1);

	/* Open file for writing in append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		/* Get the length of the string to be appended */
		for (i = 0; text_content[i] != '\0'; i++)
			;

		/* Write the string to the file */
		written_chars = write(fd, text_content, i);
		if (written_chars != i)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close file */
	close(fd);

	return (1);
}
