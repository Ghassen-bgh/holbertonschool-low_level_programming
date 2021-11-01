#include<stdio.h>
#include<stdlib.h>
#include"dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * new_dog - creates a new struct for a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: new struct with dog_t type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *copy_of_name;
	char *copy_of_owner;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->age = age;
	if (name != NULL)
	{
		copy_of_name = malloc(_strlen(name) + 1);
		if (copy_of_name == NULL)
		{
			free(newdog);
			return (NULL);
		}
		newdog->name = _strcpy(copy_of_name, name);
	}
	else
		newdog->name = NULL;
	if (owner != NULL)
	{
		copy_of_owner = malloc(_strlen(owner) + 1);
		if (copy_of_owner == NULL)
		{
			free(copy_of_name);
			free(newdog);
			return (NULL);
		}
		newdog->owner = _strcpy(copy_of_owner, owner);
	}
	else
		newdog->owner = NULL;
	return (newdog);
}
