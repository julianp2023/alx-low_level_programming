#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, followed by a new line.
 *              Utilizes the putchar function for output.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        putchar(c);
    }

    putchar('\n');

    return 0;
}

