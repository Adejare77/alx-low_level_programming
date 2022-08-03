#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - converts a date to the day of year
 * and determines how many days are left in the year, taking
 * number_of_days_in_the_year year into consideration
 *
 * @month: month in number format
 * @day: day of the month
 * @year: year
 *
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int days_in_this_month, number_of_days_in_the_year = 365;
	int days_before_this_month = convert_day(month, 0);
	int days_after_this_month = convert_day(month + 1, 0);

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		number_of_days_in_the_year = 366;
		days_after_this_month = convert_day(month + 1, 1);
	}

	days_in_this_month = day - days_before_this_month;

	if (month == 2 && day <= days_after_this_month)
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", number_of_days_in_the_year - day);
	}
	else if (month >= 1 && month <= 12)
	{
		if ((day <= days_after_this_month) && (month + 1 <= 12))
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", number_of_days_in_the_year - day);
		}
		else if (month == 12 && day <= number_of_days_in_the_year)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", number_of_days_in_the_year - day);
		}

		else
			printf("Invalid date: %02d/%02d/%04d\n", month, days_in_this_month, year);
	}
			
	else
		printf("Invalid date: %02d/%02d/%04d\n", month, days_in_this_month, year);
}
