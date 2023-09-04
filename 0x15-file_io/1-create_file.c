#include "main.h"
/**
 * create_file - create
 * @filename: name
 * text_content: con
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fn, str = 0, i = 0;

	if (!filename)
		return (-1);
	fn = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fn == -1)
		return (-1);
	while (text_content[str] != '\0')
		str++;
	i = write(fn, text_content, str);
	close(fn);
	if (i != str)
		return (-1);
	return (1);
}
