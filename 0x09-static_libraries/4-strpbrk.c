#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The set of bytes to search for
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *current = accept;

		while (*current != '\0')
		{
			if (*current == *s)
				return s;
			current++;
		}

		s++;
	}

	return NULL;
}

