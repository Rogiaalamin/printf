#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format : is a character string.
 * Return :the number of character
 */
int _printf(const char *format, ...)
{
	va_list args;
	int str;
	
	if (format == NULL)
	{
	return (-1);
	str = _strlen(format);
	}
	if (str <= 0)
	{
	return (0);
	}
	va_start(args, format);
	_putchar(-1);
	va_end(args);
	return (str);
}

