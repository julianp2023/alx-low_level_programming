#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the terminating null byte,
 *            to the buffer pointed to by dest
 * @dest: Destination buffer to copy to
 * @src: Source string to copy from
 *
 * Return: Pointer to the resulting string (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return dest;
}

