#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @src: copied memory
 * @dest: stored memory
 * @n: number of bytes
 *
 * Return: the pointer to dest
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
