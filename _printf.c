#include "main.h"

/**
  *_printf - Entry for printf
  *@fmt: list of arguments passed
  *Return: i
  */

int _printf(const char *fmt, ...)
{
	int i = 0;
	va_list ap;

	if (fmt == NULL || (fmt[0] == '%' && fmt[1] == '\0'))
		return (-1);

	va_start(ap, fmt);

	for (; *fmt != '\0'; fmt++)
	{
		if (*fmt != '%')
		{
			_putchar(*fmt);
			i++;
		}
		else
		{
			fmt++;
			i += valid_args(&fmt, ap);
		}
	}
	va_end(ap);
	return (i);
}

