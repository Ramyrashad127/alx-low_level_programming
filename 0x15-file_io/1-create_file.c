#include "main.h"
/**
 * create_file - create
 * @filename: name
 * text_content
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fn, str = 0, i;

	if (!filename)
		return (-1);
	fn = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fn == -1)
		return (-1);
	while (text_content[str] != '\0')
		str++;
	i = write(fn, text_content, str);
	if (i != str)
		return (-1);
	close(fn)
	return (1);
}

