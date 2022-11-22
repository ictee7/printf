#include "main.h"
/**
 * _printf -function main entry.
 * Description: function that emulates printf.
 * @format: list of types of arguments passed to the function
 * Return: void
 **/
int _printf(const char *format, ...)
{
	int i = 0;
	va_list valist;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(valist, format);

	for (; *format != '\0'; format++)
	{
		if (*format != '%')
		{
			_putchar(*format);
			i++;
		}
		else
		{
			format++;
			i += valid_args(&format, valist);
		}
	}

	va_end(valist);

	return (i);
}
