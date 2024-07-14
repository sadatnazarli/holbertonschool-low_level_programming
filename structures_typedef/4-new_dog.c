#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;
	char *new_name;
	char *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	ptr_dog = malloc(sizeof(dog_t));
	if (ptr_dog == NULL)
	{
		return (NULL);
	}
	new_name = malloc(strlen(name) + 1);
	if (new_name == NULL)
	{
		free(ptr_dog);
		return (NULL);
	}
	strcpy(new_name, name);

	new_owner = malloc(strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(ptr_dog);
		return (NULL);
	}
	strcpy(new_owner, owner);

	ptr_dog->name = new_name;
	ptr_dog->age = age;
	ptr_dog->owner = new_owner;
	return (ptr_dog);
}
