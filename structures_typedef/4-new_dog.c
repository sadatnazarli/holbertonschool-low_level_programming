#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;
	int lname, lowner;

	if (name == NULL || owner == NULL)
		return (NULL);

	ptr_dog = malloc(sizeof(dog_t));

	if (ptr_dog == NULL)
		return (NULL);

	lname = strlen(name);
	lowner = strlen(owner);

	ptr_dog->name = malloc(lname + 1);
	ptr_dog->owner = malloc(lowner + 1);

	if (ptr_dog->name == NULL || ptr_dog->owner == NULL)
	{
		free(ptr_dog->name);
		free(ptr_dog->owner);
		free(ptr_dog);
		return (NULL);
	}
	strcpy(ptr_dog->name, name);
	strcpy(ptr_dog->owner, owner);
	ptr_dog->age = age;
	return (ptr_dog);
}
