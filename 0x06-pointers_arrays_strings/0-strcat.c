#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
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

	/* Add the null byte at the end of the concatenated string */
	dest[dest_len] = '\0';

	return (dest);
}

