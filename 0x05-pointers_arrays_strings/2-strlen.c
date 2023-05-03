#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: string
 * Return: length
*/

int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
