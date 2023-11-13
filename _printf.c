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
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i += 1;
			switch (format[i])
			{
				case 'c':
					sum += _print_c(va_arg(args, int));
					break;
				case '%':
					sum += _print_c('%');
					break;
				case 's':
					sum += _print_s(va_arg(args, char *));
					break;
			}
		}
		else
		{
			sum += _putchar(format[i]);
		}
	}

	va_end(args);
	return (sum);
}
