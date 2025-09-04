#include <stdio.h>

int main() {
    int day, month, year;

    // Array of month codes (for each month Jan-Dec)
    int monthCode[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    // Array of day names (0 = Sunday, 1 = Monday, etc.)
    const char *dayName[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    // For January and February, treat them as month 13 & 14 of previous year
    if (month < 3) {
        year -= 1;
    }

    // Formula to calculate day of the week
    int weekDay = (year + year / 4 - year / 100 + year / 400 + monthCode[month - 1] + day) % 7;

    printf("Day of the week is: %s\n", dayName[weekDay]);

    return 0;
}
