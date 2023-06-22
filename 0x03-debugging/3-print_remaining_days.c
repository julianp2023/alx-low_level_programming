#include <stdio.h>
#include "main.h"

/**
 * is_leap_year - checks if a year is a leap year
 * @year: year to be checked
 *
 * Return: 1 if it's a leap year, 0 otherwise
 */
int is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return (1);
	else
		return (0);
}

/**
 * day_of_year - calculates the day of the year
 * @month: month in number format
 * @day: day of the month
 * @leap: flag indicating if it's a leap year
 *
 * Return: the day of the year
 */
int day_of_year(int month, int day, int leap)
{
	int days_in_month[] = {31, 28 + leap, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i, day_count = 0;

	for (i = 0; i < month - 1; i++)
	{
		day_count += days_in_month[i];
	}

	day_count += day;
	return (day_count);
}

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 *
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int leap;

	leap = is_leap_year(year);

	if (month > 2 && leap)
	{
		printf("Day of the year: %d\n", day_of_year(month, day, leap));
		printf("Remaining days: %d\n", 366 - day_of_year(month, day, leap));
	}
	else if (month == 2 && day == 29 && leap)
	{
		printf("Day of the year: %d\n", day_of_year(month, day, leap));
		printf("Remaining days: %d\n", 366 - day_of_year(month, day, leap));
	}
	else
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}
}

