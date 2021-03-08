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
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_name = malloc(sizeof(char) * char_count(name) + 1);
	if (!new_name)
		return (NULL);

	new_owner = malloc(sizeof(char) * char_count(owner) + 1);
	if (!new_owner)
	{
		free(new_name);
		return (NULL);
	}

	new_doge = malloc(sizeof(dog_t));
	if (!new_doge)
	{
		free(new_name);
		free(new_owner);
		return (NULL);
	}

	new_doge->name = new_name;
	new_doge->age = age;
	new_doge->owner = new_owner;

	return (new_doge);
}
