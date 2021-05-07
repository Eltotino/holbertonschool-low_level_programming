#include "holberton.h"
#include <unistd.h>
#include <fcntl.h>
/**
*create_file - creates and write a file
*@filename: pointer to the file
*@text_content: content of the file
*
* Return: size of file
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, w;
	int len;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		w = write(fd, text_content, len);
		if (w < 0)
			return (-1);
	}
	return (1);
}
