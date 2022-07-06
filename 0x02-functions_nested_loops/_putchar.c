#include <unistd.h>
/**
 *
 * _putchar - site the character to stdout
 * @c:character to print
 * Return: on succes 1
 * on error, -1 is returned, and error is set approximately
 */
int_putchar(char c)
{
	return (write(1, &c, 1));
}
