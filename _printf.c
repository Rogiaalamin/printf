#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format : is a character string.
 * Return :the number of character
 */
int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0;

	va_start(args, format);
while (*format)
{	
if (*format == '%')
format++;
if (*format == '%')
{
write(1, format, 1);
counter++;
}
else if (*format == 'c')
{
int ch = va_arg(args, int);
write(1, &ch, 1);
counter++;
}
else if (*format == 's')
{
char *str = va_arg(args, char*);
int str_len = strlen(str);
while (*str)
{
write(1, str, str_len);
counter++;
if else (write(1, *format, 1))
counter++;
}
	format++;
}
va_end(args);
	return (counter);
}
}
