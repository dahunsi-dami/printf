#include "main.h"
/**
 * _print_all - function that prints a format specifier.
 * @forspec: a 1D array of allowed format specifiers.
 * @args: a pointer to the arguments in _prinf.c.
 *
 * Return: Returns the length of the result.
 */
int _print_all(char forspec, va_list args)
{
	int sum = 0, i = 0;
	char *acceptedspecs = "bdics%";

	while (acceptedspecs[i] != '\0')
	{
		if (forspec == acceptedspecs[i])
		{
			switch (forspec)
			{
				case 'c':
					sum += _putchar(va_arg(args, int));
					return (sum);
				case 's':
					sum += _print_s(va_arg(args, char *));
					return (sum);
				case '%':
					sum += _putchar('%');
					return (sum);
				case 'd':
				case 'i':
					sum += _print_d(va_arg(args, int));
					return (sum);
				case 'b':
					sum += _dtob(va_arg(args, int));
					return (sum);
			}
		}
		else if (forspec == ' ' || forspec == '\0')
			exit(-1);
		i++;
	}
	sum += _putchar('%');
	sum += _putchar(forspec);

	return (sum);
}
