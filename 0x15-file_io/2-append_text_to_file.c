#include "main.h"
/**
 * append_text_to_file - app
 * @filename: name
 * @text_content: content
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t len = 0, res = 0;

	while (text_content != '\0')
		str++;
	f = open(filename, O_WRONLY | O_APPEND);
	if (n == -1)
		return (-1);
	if (str)
		len = write(f, text_content, str);
	close(f);
	if (len == str)
		return (1);
	return (-1);
}
