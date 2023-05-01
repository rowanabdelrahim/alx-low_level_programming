#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	int i = 0;

	while (i <= 10)
	{
		for (c = 'a'; c < 'z'; c++)
		{
			_putchar(c);
			_putchar('\n');
			i++;
		}
	}
}
