#include "main.h"
/**
 * printf_int - print integer
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_int(va_list args)
{
	int n = va_arg(args, int);
	int i = 0;
	int temp = n, digits = 0, exp, dig;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		i++;
	}

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (temp != 0)
	{
		temp = temp / 10;
		digits++;
	}
	for (exp = 1; exp <= digits; exp *= 10)
	{
		dig = (n / exp) % 10;
		_putchar('0' + dig);
		i++;
	}
	return (i);
}
