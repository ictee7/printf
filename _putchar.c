#include <unistd.h>

/**
  *_putchar - writes character c to stdout
  *@c: parameter passed
  *Return: 1 on success or -1 on error
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
