#include "main.h"

void _twoscomplement(char *buffer)
{
	int i = 0, j;
	while (buffer[i])
		i++;
	i -= 1;
	while (i >= 0)
	{
		if (buffer[i] == '1')
			break;
	}

	for (j = i - 1; j >= 0; j--)
	{
		if (buffer[j] == '0')
			buffer[j] = 1 + '0';
		else if (buffer[j] == '1')
			buffer[j] = 0 + '0';
	}
}
