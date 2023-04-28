#include<stdio.h>

/**
 * main - Entry point
 * Description: prints numbers
 * Return: Always 0 (Success)
*/
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar("%d, ", a);
		a = a + 1;
	}
	return (0);
}
