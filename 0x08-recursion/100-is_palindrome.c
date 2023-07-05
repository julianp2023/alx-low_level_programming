#include "main.h"
#include <ctype.h>

/**
 * is_palindrome_recursive - Checks if a string is a palindrome using recursion
 * @s: The string to check
 * @start: The starting index of the current comparison
 * @end: The ending index of the current comparison
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	char c1, c2;

	if (start >= end)
		return (1);

	/* Skip non-alphabetic characters */
	while (!isalpha(s[start]))
		start++;
	while (!isalpha(s[end]))
		end--;

	/* Convert characters to lowercase for case-insensitive comparison */
	c1 = tolower(s[start]);
	c2 = tolower(s[end]);

	if (c1 != c2)
		return (0);

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;
	int start = 0;
	int end = 0;

	while (s[len] != '\0')
		len++;

	end = len - 1;

	return (is_palindrome_recursive(s, start, end));
}

