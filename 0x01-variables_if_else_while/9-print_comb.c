#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "0123456789\n", 11);

	return (0);
}

