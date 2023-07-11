#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a specific char
 * @size: The size of the array
 * @c: The char value used for initialization
 *
 * Return: Pointer to the created array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	unsigned int i;

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

