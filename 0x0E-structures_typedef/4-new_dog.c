#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner of the dog
 *
 * Return: Pointer to the new dog (dog_t), or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;
	int name_length, owner_length;

	/* Calculate the length of the name and owner strings */
	name_length = strlen(name) + 1;
	owner_length = strlen(owner) + 1;

	/* Allocate memory for the new dog structure */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory for the name and owner strings */
	name_copy = malloc(name_length * sizeof(char));
	owner_copy = malloc(owner_length * sizeof(char));
	if (name_copy == NULL || owner_copy == NULL)
	{
		free(new_dog);
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	/* Copy the name and owner strings to the new memory locations */
	strncpy(name_copy, name, name_length);
	strncpy(owner_copy, owner, owner_length);

	/* Assign the copied name and owner strings to the new dog */
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}

