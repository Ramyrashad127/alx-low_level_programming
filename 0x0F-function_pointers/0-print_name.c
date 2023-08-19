#include "function_pointers.h"
/**
 * print_name - test
 * @name: test
 * @f: test
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
