#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
/**
 * append_text_to_file - function tgat appends text to file
 * @filename: name of file
 * @text_content: content to append
 *
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (i = 0; text_content[i] != '\0'; i++)
		;
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	write(fd, text_content, i);
	return (1);
}
