#include "main.h"

/**
 * _stract - concatenates two strings
 * @dest: input
 * @src: input
 *
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int n;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}

