#include "main.h"
/**
 * p_char - print the chars .
 * Description: handle printing char(s)
 * @valist: valist that have the argument to print
 * Return: 1 on success
 **/
int p_char(va_list valist)
{
	_putchar(va_arg(valist, int));
	return (1);
}
/**
 * p_string - print s string.
 * Description: handle printing chars
 * @valist: valist that have the argument to print
 * Return: len of string
 **/
int p_string(va_list valist)
{
	char *s;
	int i;

	s = va_arg(valist, char *);

	if (!s)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return (i);
}
