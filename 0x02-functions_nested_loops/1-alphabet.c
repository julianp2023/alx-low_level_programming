#include "main.h"

void print_alphabet(void);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    print_alphabet();
    return 0;
}

/**
 * print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        _putchar(letter);
    }

    _putchar('\n');
}
