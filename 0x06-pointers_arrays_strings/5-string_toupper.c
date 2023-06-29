#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 * @str: The string to convert
 *
 * Return: A pointer to the converted string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A'; /* Convert to uppercase */
		}
	}

	return (str);
}

