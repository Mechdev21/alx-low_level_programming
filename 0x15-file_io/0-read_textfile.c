#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - function that reads a text file and prints it to the POSIX standard output.
 * @filename: name of file
 * @letters: number of letters
 *
 * Return: numbers of letter read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, n, w;
	char *c;

	c = malloc(letters);
	if (c == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
        if (fd < 0)
		return (0);
	n = read(fd, c, letters);
	if (n < 0)
		return (0);
	w = write(STDOUT_FILENO, c, n);
	if (w < 0)
		return (0);
	close(fd);
	return (w);
}
