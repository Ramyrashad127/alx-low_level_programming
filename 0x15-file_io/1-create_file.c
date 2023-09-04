#include "main.h"
/**
 * create_file - create
 * @filename:name
 * @text_content:con
 * Return:1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fn;
	ssize_t str = 0, i = 0;

	while (text_content[str] != '\0')
		str++;
	if (!filename)
		return (-1);
	fn = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fn == -1)
		return (-1);
	if (str != 0)
		i = write(fn, text_content, str);
	if (close(fn) == -1)
		return (-1);
	if (i != str)
		return (-1);
	return (1);
}
