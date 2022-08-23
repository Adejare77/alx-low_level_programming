#include "main.h"

/**
 * append_text_to_file - function that appends text at the
 * end of a file
 * @filename: is the name of the file and
 * @text_content: is the string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 *
 * Description: if filename is NULL return -1
 * if text_content is NULL, do not add anything to the file.
 * Return 1. if file exits and -1 if the file does not exist or
 * if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;
		wr = write(fd, text_content, nletters);
		if (rwr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
