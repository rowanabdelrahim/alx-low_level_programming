#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string
 * Return: void
*/


void rev_string(char *s)
{
	int i = 0;
	int a;

	while (s[i] != '\0')
		i++;

	for (a = 0; a < i; a++)
	{
		i--;
		rev = s[a];
		s[a] = s[i];
		s[i] = rev;
	}
	_putchar('\n');
}
