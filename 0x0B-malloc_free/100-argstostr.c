#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
    char *str;
    int i, j, len, total_len = 0;
    int newline_count;

    if (ac == 0 || av == NULL)
        return NULL;

    // Calculate the total length of the concatenated string
    for (i = 0; i < ac; i++)
        total_len += strlen(av[i]);

    newline_count = ac - 1;  // Number of newlines needed

    // Allocate memory for the concatenated string
    str = malloc(sizeof(char) * (total_len + newline_count + 1));
    if (str == NULL)
        return NULL;

    // Copy each argument to the concatenated string
    len = 0;
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            str[len] = av[i][j];
            len++;
        }
        if (i < ac - 1)
        {
            str[len] = '\n';  // Add a newline after each argument
            len++;
        }
    }
    str[len] = '\0';  // Add null terminator at the end

    return str;
}

