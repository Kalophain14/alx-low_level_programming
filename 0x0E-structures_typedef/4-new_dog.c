#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function for string length
 * @s: string to evaluate
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
return (length);
}
/**
 * *_strcpy - copy the string to pointer src
 * @dest: pointer to destination
 * @src: pointer string to be copied
 * Return: pointer src to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (src[length] != '\0')
	{
		/**char src to dest*/
		dest[length] = src[length];
		length++;
	}
	dest[length] = '\0';
return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int length1 = _strlen(name);
	int length2 = _strlen(owner);
	int i = 0;

	/**malloc dog_t struct*/
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	/**malloc name*/
	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	while (name[i] != '\0')
	{
		dog->name[i] = name[i];
		i++;
	}
	dog->name[i] = '\0';
	i = 0;
	while (owner[i] != '\0')
	{
		dog->owner[i] = owner[i];
		i++;
	}
	dog->owner[i] = '\0';
	dog->age = age;
return (dog);
}
