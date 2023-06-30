#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int a[5];

	a[2] = 1024;
	*(a + 2) = 98;
	n = *(a + 2);
	printf("a[2] = %d\n", n);
	return (0);
}

