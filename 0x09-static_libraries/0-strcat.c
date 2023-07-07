#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string to append to
 * @src: Source string to be appended
 *
 * Return: Pointer to the resulting string (dest)
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append the source string to the destination string */
	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len++] = src[i];

	/* Add the null terminator at the end */
	dest[dest_len] = '\0';

	return (dest);
}

