#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - create new data structure for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 * Return: Pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
/*define a new dog*/
	dog_t *new_dog;
	int name_len, owner_len;
/*assign memory to the dog_t struct*/
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
/*calculate the length of the dog's name*/
	name_len = _strlen(name);
/*assign memory to the dog's name*/
	new_dog->name = malloc(sizeof(char) * name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
/*create a copy of the dog's name*/
	new_dog->name = _strcpy(new_dog->name, name);
/*calculate the length of the dog's owner name*/
	owner_len = _strlen(owner);
/*assign memory to the dog's owner name*/
	new_dog->owner = malloc(sizeof(char) * owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
/*create a copy of the dog's owner name*/
	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
/**
 * _strcpy - copies a pointed string
 * @dest: pointer to the destine string
 * @src: pointer to the source string
 * Return: pointer to the destine string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * _strlen - determines the length of a string
 * @s: pointer to string
 * Return: the length
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	;
	return (a);
}
