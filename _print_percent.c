#include "main.h"
/**
 * _print_percent - a function that prints a single %.
 * @p: the % to be printed.
 *
 * Return: the length of the character %.
 */
int _print_percent(char p)
{
	if (p == '%')
		_putchar(p);
	return (1);
}
