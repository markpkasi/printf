#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: 0(successs) and -1 error and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
