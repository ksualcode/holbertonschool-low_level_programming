#ifndef DOG_H
#define DOG_H

/**
 * struct dog - doggos > cattos
 * @name: the dogs name
 * @age: Age of the dog
 * @owner: the legitimate owner of the doggo
 *
 * Description: Creates a dogo
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

/* dog_t *new_dog(char *name, float age, char *owner); */

/* void free_dog(dog_t *d); */

#endif /* #define DOG_H */
