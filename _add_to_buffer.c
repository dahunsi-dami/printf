#include "main.h"
#include <stdio.h>

int _add_to_buffer(char *str, char *buffer)
{
	int i = 0, j = 0, k = 0;

	while (*buffer != '\0')
	{
		buffer++;
		i++;
	}

	for (k = 0; str[k] != '\0'; k++)
	{
		*buffer = str[k];
		buffer++;
		i++;
	}

	for (j = 0; j < i; j++)
	{
		putchar(buffer[j]);
	}
	putchar('\n');
	return (i);
}

int main(void)
{
	char buffer[1024] = "";

	char *test = "10110";

	_add_to_buffer(test, buffer);

	return (0);
}
