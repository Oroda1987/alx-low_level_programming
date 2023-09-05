#include "main.h"

/**
 *read_textfile - reads a text file
 *
 *@filename: filename to read
 *
 *@letters: is the number of letters it should read and print
 *
 *Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t r;
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);


}
