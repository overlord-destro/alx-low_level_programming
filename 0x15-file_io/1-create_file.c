#include "main.h"
/**
*create_file - creates file
*@filename: file name
*@text_content: content to be written in file
*Return: returns 1 on succes
*/
int create_file(const char *filename, char *text_content)
{
	int fd, wrt, len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	wrt = write(fd, text_content, len);
	if (wrt == -1)
		return (-1);

	close(fd);

	return (1);
}
