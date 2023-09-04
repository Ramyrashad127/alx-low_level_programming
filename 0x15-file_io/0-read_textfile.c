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
	int n, k;

	fn = fopen(filename,"r");
	if (!fn)
		return (0);
	s = malloc(sizeof(char) * letters);

	if (!s)
		return (0);

	k = read(fn,s,letters);
	fclose(fn);
	n = write(1, s, k);

	if (k == -1 || n == -1)
		return (0);

	return (n);
}

