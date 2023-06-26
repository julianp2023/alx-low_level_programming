#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to print.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int length = 0;
	int i, start;

	while (str[length] != '\0')
		length++;

	start = length / 2;
	if (length % 2 != 0)
		start += 1;

	for (i = start; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}

