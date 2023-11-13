#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: a char string made of 0 or more directives.
 *
 * Return: number of chars printed, excluding null byte.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, sum = 0;

	va_start(args, format);

	if (!format)
		return (-1);
	if (format[i] == '%' && format[i + 1] == ' ' && !format[i + 2])
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i - 1] == '%')
		{
			_putchar('%');
		}
		if (format[i] == '%')
			continue;
		if (format[i] == 'c' && format[i - 1] == '%')
		{
			sum += _print_c(va_arg(args, int));
			continue;
		}
		if (format[i] == 's' && format[i - 1] == '%')
		{
			sum += _print_s(va_arg(args, char *));
			continue;
		}
		_putchar(format[i]);
		sum++;
	}

	va_end(args);
	return (sum);
}
