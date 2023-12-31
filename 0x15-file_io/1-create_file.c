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
	int str = 0, i = 0;

	if (!text_content)
		str = 0;
	else
	{
		while (text_content[str] != '\0')
			str++;
	}
	if (!filename)
		return (-1);
	fn = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fn == -1)
		return (-1);
	if (str != 0)
		i = write(fn, text_content, str);
	close(fn);
	if (i != str)
		return (-1);
	return (1);
}
