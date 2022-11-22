#include "main.h"
/**
 * int_to_may_hex - int to hex min
 * @n: unsigned int to base 16
 * Description: function that prints hexadecimal uppercase
 * Return: number of digits printed
 */
int int_to_may_hex(unsigned int n)
{
	int count;

	count = 0;
	if ((n / 16) != 0)
	{
		count += int_to_may_hex((n / 16));

		if ((n % 16) <= 9)
			_putchar((n % 16) + 48);
		else
			_putchar((n % 16) + 48 + 7);
	}
	else
	{
		if ((n % 16) <= 9)
			_putchar((n % 16) + 48);
		else
			_putchar((n % 16) + 48 + 7);
	}

	count++;
	return (count);
}
/**
 * int_to_min_hex - int to HEX
 * @n: unsigned int to base 16
 * Return: number of digits printed
 */
int int_to_min_hex(unsigned int n)
{
	int count;

	count = 0;
	if ((n / 16) != 0)
	{
		count += int_to_min_hex((n / 16));

		if ((n % 16) <= 9)
			_putchar((n % 16) + 48);
		else
			_putchar((n % 16) + 48 + 39);
	}
	else
	{
		if ((n % 16) <= 9)
			_putchar((n % 16) + 48);
		else
			_putchar((n % 16) + 48 + 39);
	}

	count++;
	return (count);
}

/**
 * p_x_may - print the hexa.
 * Description: handle printing hexadecimal uppercase
 * @valist: valist that have the argument to print
 * Return: len of digits
 */
int p_x_may(va_list valist)
{
	unsigned int tmp;
	int printed;

	tmp = va_arg(valist, int);

	printed = int_to_may_hex(tmp);
	return (printed);
}
/**
 * p_x_min - print hexa
 * Description: handle printing hexadecimal lowercase
 * @valist: valist that have the argument to print
 * Return: len of digits
 */
int p_x_min(va_list valist)
{
	unsigned int tmp;
	int printed;

	tmp = va_arg(valist, unsigned int);

	printed = int_to_min_hex(tmp);
	return (printed);
}
