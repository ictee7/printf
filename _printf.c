#include "main.h"
<<<<<<< HEAD
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
=======

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
>>>>>>> 3a470f541044878857aeb4e55f27581635875bb9
			i++;
		}
		else
		{
<<<<<<< HEAD
			format++;
			i += valid_args(&format, valist);
		}
	}

	va_end(valist);

	return (i);
}
=======
			fmt++;
			i += valid_args(&fmt, ap);
		}
	}
	va_end(ap);
	return (i);
}

>>>>>>> 3a470f541044878857aeb4e55f27581635875bb9
