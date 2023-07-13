#include<unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
    char *msg = "and that piece of art is useful\" ";
    char *m = "- Dora Korpar, 2015-10-19\n";
    write(2, msg, 59);
    write(2,m,59);
    return (1);
}
