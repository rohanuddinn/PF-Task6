#include <stdio.h>

int main() {
    int age;
    char day;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter day (W for weekday, H for weekend/holiday): ");
    scanf(" %c", &day);

    if (age < 12 || age > 60) {
        if (day == 'W') {
            printf("Ticket Price = Rs. 200");
        } else {
            printf("Ticket Price = Rs. 300");
        }
    } else {
        if (day == 'W') {
            printf("Ticket Price = Rs. 300");
        } else {
            printf("Ticket Price = Rs. 500");
        }
    }

    return 0;
}