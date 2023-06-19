#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		write(1, &letter, 1);
	}
	write(1, "\n", 1);

	return (0);
}

