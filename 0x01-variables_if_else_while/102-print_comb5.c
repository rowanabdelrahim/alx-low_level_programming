#include<stdio.h>
/**
 * main - Entry point
 * Description: Advanced task
 * Return: 0 (Success)
*/

int main(void)
{
	int a = 0, b;

	while (a <= 99)
	{
		b = a;
		b = 0;
		while (b <= 99)
		{
			if (a != b)
			{
				putchar (a / 10 + 48);
				putchar (a % 10 + 48);
				putchar (' ');
				putchar (b / 10 + 48);
				putchar (b % 10 + 48);

				if (a != 98, b != 99)
				{
					putchar (',');
					putchar (' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar ('\n');
	return (0);
}
