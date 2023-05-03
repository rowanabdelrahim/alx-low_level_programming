#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: string
 * Return: nothing
*/

void puts_half(char *str)
{
	int l, i;
	char temp;

	for (l = 0; s[l] != '\0'; ++l)

		for (i = 0; i < l / 2; i++)
		{
			temp = s[i];
			s[i] = s[l - 1 - i];
			s[l - 1 - i] = temp;
		}
}
