#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i;
	int capitalize_next = 1; /* Flag to indicate whether the next character should be capitalized */

	for (i = 0; str[i] != '\0'; i++)
	{
		if (capitalize_next && isalpha(str[i])) /* Check if the character should be capitalized */
		{
			str[i] = toupper(str[i]);
			capitalize_next = 0;
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			 str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			 str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			 str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			capitalize_next = 1; /* Set the flag to capitalize the next character */
		}
	}

	return str;
}

