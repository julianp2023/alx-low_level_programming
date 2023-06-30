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
	/* Your code goes here */
	*((int *)&n + 5) = 98;
	/* Your code ends here */
	printf("a[2] = %d\n", a[2]);
	return (0);
}

