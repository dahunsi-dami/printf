#include "lists.h"

int _pow(int base, int pow)
{
	int i, result = 1;

	for (i = 0; i < pow; i++)
		result *= base;

	return (result);
}

int _binary(int num)
{
	int i = 0, result;

	while (_pow(2, i) < num)
		i++;
	i -= 1;

	while (i >= 0)
	{
		result = _pow(2, i);
		if (result <= num)
		{
			_add_to_buffer(1);
			num -= result;
		}
		else
		{
			_add_to_buffer(0);
		}
		i--;
	}
	_add_to_buffer(-1);
	printf("\n");
	return (0);
}
