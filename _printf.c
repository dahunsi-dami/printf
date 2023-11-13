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
	int i, sum = 0;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			i = i + 2;
		}
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			sum += _print_c(va_arg(args, int));
			i = i + 2;
			continue;
		}
		if (format[i] == '%' && format[i + 1] == 's')
		{
			sum += _print_s(va_arg(args, char *));
			i = i + 2;
			continue;
		}
		_putchar(format[i]);
		sum++;
	}

	va_end(args);
	return (sum);
}
