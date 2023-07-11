#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	unsigned int length = 0;
	unsigned int i;
	char *duplicate;

	if (str == NULL)
		return NULL;

	while (str[length] != '\0')
		length++;

	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return NULL;

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return duplicate;
}

