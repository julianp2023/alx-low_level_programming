#include "main.h"
#include <stddef.h>

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end;

	if (s == NULL)
		return;

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	end = length - 1;

	/* Swap characters from start and end positions until they meet in the middle */
	while (start < end)
	{
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}


