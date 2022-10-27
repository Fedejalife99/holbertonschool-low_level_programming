#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 *new_dog - function that creates a new dog
 *@name: pointer to a char
 *@age: float
 *@owner: pointer to char
 *Return: caniche
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *caniche = malloc(sizeof(dog_t));

	if (age <= 0)
		free(caniche);
	if (caniche == NULL)
	{
		free(caniche);
	}
	caniche->name = malloc(sizeof(char) * strlen(name) + 1);
	if (caniche->name == NULL)
	{
		free(caniche->name);
		free(caniche);
	}
	caniche->owner = malloc(sizeof(char) * strlen(name) + 1);
	if (caniche->owner == NULL)
	{
		free(caniche->owner);
		free(caniche);
	}

	caniche->name = strcpy(caniche->name, name);
	caniche->owner = strcpy(caniche->owner, owner);
	caniche->age = age;

	return (caniche);
}


