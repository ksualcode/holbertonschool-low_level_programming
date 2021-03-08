#include <stdlib.h>
#include "dog.h"

/**
 * char_count - counts the ammount of chars on a string
 * @str: Strig to count
 *
 * Return: the number of characters
 */

int char_count(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
	}

	return (i);
}


/**
 * new_dog - functions that creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: name of the owner of the new doggo
 *
 * Return: a dog variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_doge;
	int i;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_doge = malloc(sizeof(dog_t));
	if (!new_doge)
		return (NULL);

	new_doge->name = malloc(sizeof(char) * char_count(name) + 1);
	if (!new_doge->name)
	{
		free(new_doge);
		return (NULL);
	}

	new_doge->owner = malloc(sizeof(char) * char_count(owner) + 1);
	if (!new_doge->owner)
	{
		free(new_doge->name);
		free(new_doge);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
		new_doge->name[i] = name[i];

	for (i = 0; owner[i]; i++)
		new_doge->owner[i] = owner[i];

	return (new_doge);
}
