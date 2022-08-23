#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: name of the file to be read
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * Description: if the file cannot be opened or read, return 0,
 * if the filename is NULL, return 0, if write fails or does not
 * write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (wr);
}
