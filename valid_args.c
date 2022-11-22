#include "main.h"

/**
  *valid_args - Check for valid args
  *@fmt: first parameter passed
  *@ap: second parameter passed
  *Return: printed
  */
int valid_args(const char **fmt, va_list ap)
{
	int i, printed;

	op_t ops[] = {
		{"i", p_int},
		{"d", p_d_int},
		{"b", p_bin},
		{"u", p_uint},
		{"o", p_oct},
		{"x", p_x_min},
		{"X", p_x_may},
		{"c", p_char},
		{"s", p_string},
		{NULL, NULL}
	};

	printed = 0;

	for (i = 0; *(ops[i].f) != NULL; i++)
	{
		if (*fmt[0] == '%')
		{
			_putchar('%');
			printed++;
			break;
		}

		else if (*fmt[0] == *(ops[i].op))
		{
			printed += ops[i].f(ap);
			break;
		}
	}

	if (*(ops[i].f) == NULL)
	{
		_putchar('%');
		_putchar(*fmt[0]);
		printed += 2;
	}
	return (printed);
}

