#include <stdio.h>
#include <stdbool.h>

bool is_leap(int y) {
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

int days_in_month(int y, int m) {
    static const int dim[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (m == 2) return dim[m] + (is_leap(y) ? 1 : 0);
    return dim[m];
}

/* Sakamoto's algorithm: returns 0..6 for Sun..Sat */
int day_of_week(int y, int m, int d) {
    static const int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    if (m < 3) y -= 1;
    return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

int main(void) {
    int d, m, y;

    printf("Enter date (DD MM YYYY): ");
    if (scanf("%d %d %d", &d, &m, &y) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    if (m < 1 || m > 12) {
        printf("Invalid month.\n");
        return 1;
    }
    int maxd = days_in_month(y, m);
    if (d < 1 || d > maxd) {
        printf("Invalid day for that month/year (max %d).\n", maxd);
        return 1;
    }

    const char *names[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int w = day_of_week(y, m, d);
    printf("Day of week: %s\n", names[w]);

    return 0;
}
