#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
*/

void print_diagsums(int *a, int size)
{
	int i, n, sum0 = 0, sum1 == 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sum0 = sum0 + a[i];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		sum1 = sum1 + a[n];
	printf("%d, %d/n", sum0, sum1);
}
