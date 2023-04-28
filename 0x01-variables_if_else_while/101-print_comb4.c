#include<stdio.h>

/**
 * main - Emtry point
 * Description: print numbers
 * Return: 0 (Success)
*/

int main(void)
{
	int a = 0, b, c;

	while (a <= 7)
	{

		b = 0;
		while (b <= 8)
		{
			c = 0;
			while (c <= 9)
			{
				if (a != b && a != c && b != c && a < b && b < c && a < c)
				{
					putchar(a + 48);
					putchar(b + 48);
					putchar(c + 48);
					if (a + b + c != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
