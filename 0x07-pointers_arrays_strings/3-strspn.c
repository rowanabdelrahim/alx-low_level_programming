#include "main.h"

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: pointer to s
*/


char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}

