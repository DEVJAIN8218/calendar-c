#include <stdio.h>
#include <string.h>
struct calander
{
	int year;
	char month[20];
	int day;
};
int main()
{
	struct calander a;
	int b, c, d, e;
	printf("enter the year");
	scanf("%d", &a.year);
	printf("enter the month");
	scanf("%s", a.month);
	printf("enter the day");
	scanf("%d", &a.day);

    if ((a.year + 1) % 400 == 0 || (a.year + 1) % 4 == 0 && (!((a.year + 1) % 100 == 0)))
	{
		b = a.year % 400;
		if (strcmp(a.month, "January") == 0)
		{
			c = b * 365.25 + a.day;
			d = c % 7;
		}
		else if (strcmp(a.month, "February") == 0)
		{
			c = b * 365.25 + 31 + a.day;
			d = c % 7;
		}
		else if (strcmp(a.month, "March") == 0)
		{
			c = b * 365.25 + 60 + a.day;
			d = c % 7;
		}
		else if (strcmp(a.month, "April")==0)
		{
			c = b * 365.25 + 91 + a.day;
			d = c % 7;
		}
		else if (strcmp(a.month, "May")==0)
		{
			c = b * 365.25 + 121 + a.day;
			d = c % 7;
		}
		else if (strcmp(a.month, "June") == 0)
		{
			c = b * 365.25 + 152 + a.day;
			d = c % 7;
		}
		else if (strcmp(a.month, "July") == 0)
		{
			c = b * 365.25 + 182 + a.day;
			d = c % 7;
		}
		else if (strcmp(a.month, "August") == 0)
		{
			c = b * 365.25 + 213 + a.day;
			d = c % 7;
		}
		else if (strcmp(a.month, "September") == 0)
		{
			c = b * 365.25 + 244 + a.day;
			d = c % 7;
		}
		else if (strcmp(a.month, "October") == 0)
		{
			c = b * 365.25 + 274 + a.day;
			d = c % 7;
		}
		else if (strcmp(a.month, "November") == 0)
		{
			c = b * 365.25 + 305 + a.day;
			d = c % 7;
		}
		else if (strcmp(a.month, "December") == 0)
		{
			c = b * 365.25 + 335 + a.day;
			d = c % 7;
		}
		if (d == 0)
			printf("Saturday");
		else if (d == 1)
			printf("Sunday");
		else if (d == 2)
			printf("Monday");
		else if (d == 3)
			printf("Tuesday");
		else if (d == 4)
			printf("Wednesday");
		else if (d == 5)
			printf("Thursday");
		else if (d == 6)
			printf("Friday");
	}

	else{
		b = a.year % 400;
		if (strcmp(a.month, "January") == 0)
		{
			c = b * 365.25 + a.day;
			d = c % 7;
		}
		else if (strcmp(a.month, "February") == 0)
		{
			c = b * 365.25 + 31 + a.day;
			d = c % 7;
		}
		else if (strcmp(a.month, "March")==0)
		{
			c = b * 365.25 + 59 + a.day;
			d = c % 7;
		}
		else if (strcmp(a.month, "April")==0)
		{
			c = b * 365.25 + 90 + a.day;
			d = c % 7;
		}
		else if (strcmp(a.month, "May")==0)
		{
			c = b * 365.25 + 120 + a.day;
			d = c % 7;
		}
		else if (strcmp(a.month, "June")==0)
		{
			c = b * 365.25 + 151 + a.day;
			d = c % 7;
		}
		else if (strcmp(a.month, "July")==0)
		{
			c = b * 365.25 + 181 + a.day;
			d = c % 7;
		}
		else if (strcmp(a.month, "August")==0)
		{
			c = b * 365.25 + 212 + a.day;
			d = c % 7;
		}
		else if (strcmp(a.month, "September")==0)
		{
			c = b * 365.25 + 243 + a.day;
			d = c % 7;
		}
		else if (strcmp(a.month, "October")==0)
		{
			c = b * 365.25 + 273 + a.day;
			d = c % 7;
		}
		else if (strcmp(a.month, "November")==0)
		{
			c = b * 365.25 + 304 + a.day;
			d = c % 7;
		}
		else if (strcmp(a.month, "December")==0)
		{
			c = b * 365.25 + 334 + a.day;
			d = c % 7;
		}
		if (d == 0)
			printf("Saturday");
		else if (d == 1)
			printf("Sunday");
		else if (d == 2)
			printf("Monday");
		else if (d == 3)
			printf("Tuesday");
		else if (d == 4)
			printf("Wednesday");
		else if (d == 5)
			printf("Thursday");
		else if (d == 6)
			printf("Friday");
	}
}