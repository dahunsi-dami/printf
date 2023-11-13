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

	for (i = 0; i < format; i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_print_percent(format[i]);
			i = i + 2;
			sum += va_arg(args, char);
		}

		if (format[i] == '%' && format[i + 1] == 'c')
		{
			_print_c(format[i + 1];
			sum += va_arg(args, char);
		}

		if (format[i] == '%' && format[i + 1] == 's')
		{
			_print_s(format[i + 1]);
			sum += va_arg(args, char *);
		}

		va_end(args);
		return (sum);
	}
}
