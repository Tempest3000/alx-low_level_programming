#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owners: owner's dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owners)
{
	int i = 0, j = 0, k;
	dog_t *doge;

	while (*name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	doge = malloc(sizeof(dog_t))
		j++;
	if (doge == NULL)
	{
		free(doge);
		return (NULL);
	}
	doge->name = malloc(i * sizeof(doge->name));
	if (doge->name == NULL)
	{
		free(doge->owner);
		free(doge->name);
		free(doge);
		return (NULL);
	}

	return (0);
}
