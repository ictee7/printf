#include "main.h"
/**
 * print_u_number - int to char
 * @n: int to print
 * Return: number of digits printed (and -)
 */
int print_u_number(unsigned int n)
{
	unsigned int m, tmp, count;

	count = 0;
	m = 1;
	tmp = n;

	while (tmp / 10 != 0)
	{
		m = m * 10;
		tmp = tmp / 10;
	}
	while ((n / m != 0) && (m != 1))
	{
		_putchar((n / m) + 48);
		count++;
		n = n % m;
		if (m > 1)
			m = m / 10;
		while ((n < m) && (m > 1))
		{
			_putchar('0');
			count++;
			m = m / 10;
		}
	}
	_putchar(n + 48);
	return (count + 1);
}

/**
 * p_uint - print the int.
 * Description: handle printing unsigned integer
 * @valist: valist that have the argument to print
 * Return: len of digits
 **/
int p_uint(va_list valist)
{
	unsigned int tmp;
	int printed;

	tmp = va_arg(valist, unsigned int);

	printed = print_u_number(tmp);
	return (printed);
}
