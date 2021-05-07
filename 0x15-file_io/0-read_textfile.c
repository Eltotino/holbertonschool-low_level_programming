#include "holberton.h"
#include <unistd.h>
#include <fcntl.h>
/**
*read_textfile - deletes node at a certain index in list
*@filename: pointer to the file
*@letters: size of th file
*
* Return: size of file
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buf;

	buf = malloc((letters) * sizeof(char));
	if (!buf)
		return (0);
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	r = read(fd, buf, letters);
	if (r < 0)
		return (0);
	w =  write(STDOUT_FILENO, buf, r);
	if (w != r || w < 0)
		return (0);
	close(fd);
	free(buf);
	return (w);
}
