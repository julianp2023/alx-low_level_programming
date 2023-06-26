#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for 101-crackme program.
 *
 * Return: Always 0.
 */
int main(void)
{
	int password_length = 11; /* Length of the password */
	char password[12]; /* Password buffer (including null terminator) */
	int i;

	srand(time(NULL)); /* Seed the random number generator with current time */

	for (i = 0; i < password_length; i++)
	{
		/* Generate a random character in the range of 'A' to 'z' (ASCII 65 to 122) */
		password[i] = (rand() % 57) + 65;
	}

	password[password_length] = '\0'; /* Null terminate the password */

	printf("%s\n", password);

	return (0);
}

