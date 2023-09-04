#include "main.h"
/**
 * read_textfile - read
 * @filename: f1
 * @letters: f2
 * Return: int
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fn;
	char *s;
	ssize_t n, r;

	fn = fopen(filename, "r");
	if (!fn)
		return (0);
	s = malloc(sizeof(char) * letters);

	if (!s)
		return (0);

	r = fread(s, 1, letters, fn);
	fclose(fn);
	n = write(STDOUT_FILENO, s, r);

	if (n == -1)
		return (0);

	return (n);
}

