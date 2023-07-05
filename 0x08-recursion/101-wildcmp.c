#include "main.h"

/**
 * wildcmp_recursive - Compares two strings recursively
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp_recursive(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp_recursive(s1, s2 + 1));
		else if (*(s2 + 1) == '\0')
			return (1);
		else if (*s1 == '\0')
			return (wildcmp_recursive(s1, s2 + 1));
		else
			return (wildcmp_recursive(s1 + 1, s2) || wildcmp_recursive(s1, s2 + 1));
	}

	if (*s1 != *s2)
		return (0);

	return (wildcmp_recursive(s1 + 1, s2 + 1));
}

/**
 * wildcmp - Compares two strings and determines if they can be considered identical
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_recursive(s1, s2));
}

