#include <stdio.h>

int main() {
    int units;
    char type;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    printf("Enter connection type (D for Domestic, C for Commercial): ");
    scanf(" %c", &type);

    if (type == 'D') {
        if (units <= 100)
            bill = units * 10;
        else if (units <= 300)
            bill = units * 15;
        else
            bill = units * 20;
    } else {
        if (units <= 100)
            bill = units * 15;
        else if (units <= 300)
            bill = units * 20;
        else
            bill = units * 25;
    }

    printf("Total Bill = Rs. %.2f", bill);

    return 0;
}