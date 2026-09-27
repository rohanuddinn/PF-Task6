#include <stdio.h>

int main() {
    int type, age, pass, weekend, peak, hours;
    float originalFee, surcharge, discount, finalAmount;

    printf("Enter vehicle type (1-Car, 2-Motorcycle, 3-Electric): ");
    scanf("%d", &type);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Has pass (1-Yes, 0-No): ");
    scanf("%d", &pass);

    printf("Is weekend (1-Yes, 0-No): ");
    scanf("%d", &weekend);

    printf("Is peak hour (1-Yes, 0-No): ");
    scanf("%d", &peak);

    printf("Enter parking hours: ");
    scanf("%d", &hours);

    originalFee = 0;
    surcharge = 0;
    discount = 0;
    finalAmount = 0;

    if (type < 1 || type > 3) {
        printf("\nInvalid vehicle type");
    }
    else if (age < 18) {
        printf("\nDriver is under 18");
    }
    else if (pass == 0 && weekend == 1 && type != 3) {
        printf("\nParking entry conditions not satisfied");
    }
    else {
        printf("\nVehicle is allowed to enter the parking area.");

        if (type == 1) {
            printf("\nVehicle Type: Car");
            originalFee = hours * 200;
        }
        else if (type == 2) {
            printf("\nVehicle Type: Motorcycle");
            originalFee = hours * 100;
        }
        else {
            printf("\nVehicle Type: Electric Vehicle");

            if (hours > 3)
                originalFee = (hours - 3) * 100;
            else
                originalFee = 0;
        }

        if (weekend == 1 && peak == 1)
            surcharge = originalFee * 0.20;

        if (pass == 1)
            discount = (originalFee + surcharge) * 0.25;

        finalAmount = originalFee + surcharge - discount;

        printf("\nParking Hours: %d", hours);
        printf("\nOriginal Parking Fee: Rs. %.2f", originalFee);
        printf("\nSurcharge: Rs. %.2f", surcharge);
        printf("\nDiscount: Rs. %.2f", discount);
        printf("\nFinal Amount: Rs. %.2f", finalAmount);
    }

    return 0;
}