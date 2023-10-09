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
	int r;

	for (r = 0; s[r] != '\0'; r++)
	{
	}
return (r);
}

/**
 * *_strcpy - copy the string to pointer src
 * @dest: pointer to destination
 * @src: pointer string to be copied
 * Return: pointer src to dest
 */

char *_strcpy(char *dest, char *src)
{
	int length;
	int t;

	/**copies src to dest*/
	for (length = 0; src[length] != '\0'; length++)
	for (t = 0; t < length; t++)
	{
		dest[t] = src[t];
	}
dest[t] = '\0';
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

	int length1;
	int length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	dog = malloc(sizeof(dog_t)); /**size of bytes*/
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog); /**freeing memory*/
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name); /**assigning free memory*/
		return (NULL);
	}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;

return (dog);
}
