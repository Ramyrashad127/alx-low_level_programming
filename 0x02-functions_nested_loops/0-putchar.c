#include "stdio.h"
#include <unistd.h>
/**
* _putchar - print
*
* Return: Always int
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
