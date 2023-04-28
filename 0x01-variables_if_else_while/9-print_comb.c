#include<stdio.h>

/**
 * main - Entry point
 * Description: prints numbers
 * Return: Always 0 (Success)
*/
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + 0);
		if (digit < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('$');
		}
		digit++;
	}
	return (0);
}
