#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int r;

	r = print_sign(98);
	printf("%d\n", r);

	r = print_sign(0);
	printf("%d\n", r);

	r = print_sign(-98);
	printf("%d\n", r);

	return (0);
}

