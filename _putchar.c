#include <unistd>

/**
 * _putchar - prints the char c to stdout
 * @c: char to print
 * Return: on success 1
 * on error -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
