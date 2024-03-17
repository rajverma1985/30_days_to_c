#include <stdio.h>

int main() {
    int minutes;
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    // Convert minutes to days and years
    int days = minutes / (24 * 60);
    int years = days / 365;
    days %= 365;

    printf("%d minutes is approximately %d years and %d days.\n", minutes, years, days);

    return 0;
}