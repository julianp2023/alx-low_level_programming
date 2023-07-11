#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int i, count = 0, is_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (!is_word)
			{
				count++;
				is_word = 1;
			}
		}
		else
		{
			is_word = 0;
		}
	}

	return count;
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL if str is NULL,
 *         str is empty, or if the function fails.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count;

	if (str == NULL || *str == '\0')
		return NULL;

	word_count = count_words(str);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return NULL;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			len = 0;
			k = i;
			while (str[k] != ' ' && str[k] != '\0')
			{
				len++;
				k++;
			}

			words[j] = malloc((len + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				/* Free previously allocated memory */
				while (j > 0)
				{
					free(words[j - 1]);
					j--;
				}
				free(words);
				return NULL;
			}

			for (k = 0; k < len; k++)
			{
				words[j][k] = str[i];
				i++;
			}
			words[j][k] = '\0';
			j++;
		}
		else
		{
			i++;
		}
	}
	words[j] = NULL;

	return words;
}

