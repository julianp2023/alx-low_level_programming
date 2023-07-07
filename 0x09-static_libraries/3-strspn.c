#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 *            consisting of only specific characters
 * @s: The string to be checked
 * @accept: The string containing the characters to match
 *
 * Return: The length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int match;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				match = 1;
				break;
			}
		}
		if (match == 0)
			break;
	}

	return count;
}

