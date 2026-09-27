#include <stdio.h>

int main() {
    int X, Y, Z, W;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &X, &Y, &Z, &W);

    if (X > Y) {
        if (X > Z) {
            if (X > W)
                printf("Largest = %d", X);
            else
                printf("Largest = %d", W);
        } else {
            if (Z > W)
                printf("Largest = %d", Z);
            else
                printf("Largest = %d", W);
        }
    } else {
        if (Y > Z) {
            if (Y > W)
                printf("Largest = %d", Y);
            else
                printf("Largest = %d", W);
        } else {
            if (Z > W)
                printf("Largest = %d", Z);
            else
                printf("Largest = %d", W);
        }
    }

    return 0;
}
