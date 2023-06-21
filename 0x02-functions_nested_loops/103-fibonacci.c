#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the sum of the even-valued terms
 * in the Fibonacci sequence, where the values do not exceed 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib1 = 1; /* First Fibonacci number */
	unsigned long fib2 = 2; /* Second Fibonacci number */
	unsigned long fib3 = 0; /* Variable to store the next Fibonacci number */
	unsigned long sum = 2;  /* Sum of even-valued terms, initialized with fib2 */

	while (fib3 <= 4000000)
	{
		fib3 = fib1 + fib2;
		if (fib3 % 2 == 0)
			sum += fib3;

		fib1 = fib2;
		fib2 = fib3;
	}

	printf("%lu\n", sum);

	return (0);
}

