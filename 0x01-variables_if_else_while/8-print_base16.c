#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		write(1, &digit, 1);
	}
	for (digit = 'a'; digit <= 'f'; digit++)
	{
		write(1, &digit, 1);
	}
	write(1, "\n", 1);

	return (0);
}

