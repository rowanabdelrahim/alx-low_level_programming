#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that prints the alphabet in lowercase.
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");
	return (0);
}

