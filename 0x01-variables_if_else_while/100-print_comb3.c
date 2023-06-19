#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
    int firstDigit;
    int secondDigit;

    for (firstDigit = 0; firstDigit <= 9; firstDigit++)
    {
        for (secondDigit = firstDigit + 1; secondDigit <= 9; secondDigit++)
        {
            putchar(firstDigit + '0');
            putchar(secondDigit + '0');

            if (firstDigit != 8 || secondDigit != 9)
            {
                write(1, ", ", 2);
            }
        }
    }

    putchar('\n');

    return (0);
}

