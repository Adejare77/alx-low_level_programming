#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - converts a date to the day of year
 * and determines how many days are left in the year, taking
 * leap year into consideration
 *
 * @month: month in number format
 * @day: day of the month
 * @year: year
 *
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int cmp, cmp1, leap = 365;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		leap = 366;
		day++;
	}

	cmp = convert_day(month + 1, 0);
	cmp1 = day - convert_day(month, 0);
	if (month == 2 && day <= cmp)
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", leap - day);
	}
	else if (month >= 1 && month <= 12)
	{
		if ((day <= cmp) && (month + 1 <= 12))
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", leap - day);
		}
		else if (month == 12 && day < 366)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", leap - day);
		}

		else
			printf("Invalid date: %02d/%02d/%04d\n", month, cmp1, year);
	}
			
	else
		printf("Invalid date: %02d/%02d/%04d\n", month, cmp1, year);
}
