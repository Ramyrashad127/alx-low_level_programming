#include "function_pointers.h"
/**
 * print_name - test
 * @name: test
 * @f: test
 * Retuen: null
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
