#include "main.h"
/**
*append_text_to_file - appends to file
*@filename: file name
*@text_content: null terminated string
*Return: 1 on succes and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrt, len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (len = 0; text_content[len] != '\0'; len++)
		;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	wrt = write(fd, text_content, len);
	if (wrt == -1)
		return (-1);

	close(fd);

	return (1);
}
