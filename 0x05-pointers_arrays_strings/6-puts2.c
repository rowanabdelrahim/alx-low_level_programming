#include "main.h"

/**
 * puts2 - a function that prints every other character of a string.
 * @str: string input
 * Return: print
*/

void puts2(char *str)
{
	int i = 0;
	int t = 0;
	char *y = str;
	int a;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	t = i - 1;
	for (a = 0; a <= t; a++;)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}

