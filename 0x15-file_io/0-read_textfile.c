#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 *
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: The actual number of letters it could read and print, or 0 on failure
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* File descriptor */
	ssize_t n_read, n_written; /* Number of bytes read and written */
	char *buf; /* Buffer to read file contents into */

	/* Check if filename is NULL */
	if (filename == NULL)
		return (0);

	/* Allocate memory for the buffer */
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	/* Open the file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	/* Read file contents into the buffer */
	n_read = read(fd, buf, letters);
	if (n_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	/* Write buffer contents to the standard output */	
	n_written = write(STDOUT_FILENO, buf, n_read);
	if (n_written == -1 || n_written != n_read)
	{
		free(buf);
		close(fd);
		return (0);
	}

	/* Cleanup and return number of letters read and printed */
	free(buf);
	close(fd);
	return (n_written);
}
