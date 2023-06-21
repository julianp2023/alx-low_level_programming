#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers
 * Return: 0 on success
 */
int main(void)
{
	int fib1 = 1; /* First Fibonacci number */
	int fib2 = 2; /* Second Fibonacci number */
	int fib3; /* Variable to store the next Fibonacci number */
	int count; /* Counter variable */

	printf("%d, %d", fib1, fib2); /* Print the first two Fibonacci numbers */

	for (count = 3; count <= 50; count++)
	{
		fib3 = fib1 + fib2;
		printf(", %d", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}

	printf("\n");

	return 0;
}

