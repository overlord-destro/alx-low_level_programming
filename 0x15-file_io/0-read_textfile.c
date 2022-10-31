#include "main.h"
/**
*read_textfile - reads text file and prints to STDOUT
*@filename: name of file
*@letters: number of letters
*Return: actual number of letters function could print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t red;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	red = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, red);

	close(fd);
	free(buffer);

	return (red);
}
