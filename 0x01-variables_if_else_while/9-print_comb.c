#include<stdio.h>

/**
 * main - Entry point
 * Description: prints numbers
 * Return: Always 0 (Success)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	return (0);
}
