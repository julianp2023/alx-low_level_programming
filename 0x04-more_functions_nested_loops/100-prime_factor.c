#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of the number
 */
long largest_prime_factor(long n)
{
	long i;

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}

	return (n);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;
	long largest_prime = largest_prime_factor(number);

	printf("%ld\n", largest_prime);

	return (0);
}

