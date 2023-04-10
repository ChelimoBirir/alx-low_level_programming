#include "main.h"

/**
 * create_file - Creates a file with the specified name and content
 * @filename: The name of the file to create
 * @text_content: The NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	/* Check for NULL filename */
	if (filename == NULL)
		return (-1);

	/* Open the file for writing, creating it if necessary and truncating it to 0 */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	/* Write the text_content string to the file */
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		if (write(fd, text_content, len) != len)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close the file and return success */
	close(fd);
	return (1);
}
