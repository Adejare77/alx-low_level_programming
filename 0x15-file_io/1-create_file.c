#include "main.h"

/**
 * create_file - function that creats a file
 * @filename: name of the file to be created
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 *
 * Description: file mush have those permissions: rw-------.
 * if the file already exists, do not change the permissions,
 * truncate it. if file name is NULL return -1.
 * if text_content is NULL, create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (nletters = 0; text_content[nletters]; nletters++)
		;
	wr = write(fd, text_content, nletters);

	if (rwr == -1)
		return (-1);
	close(fd);

	return (1);
}
