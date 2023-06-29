#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to capitalize
 *
 * Return: A pointer to the capitalized string
 */
char *cap_string(char *str)
{
	int i, j;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 ||
			    str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
			    str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
			    str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
			    str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
			    str[i - 1] == '}')
			{
				str[i] = str[i] - 'a' + 'A';
			}
		}
	}

	return (str);
}

