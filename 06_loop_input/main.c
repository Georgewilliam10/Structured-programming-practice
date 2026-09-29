#include <stdio.h>
#include <stdlib.h>

int main() {
    int count;
    double number, total = 0.0, average;

    printf("How many numbers would you like to enter? ");
    scanf("%d", &count);

    if (count <= 0) {
        printf("Invalid count.\n");
        return 1;
    }

    for (int i = 1; i <= count; ++i) {
        printf("Enter number %d: ", i);
        scanf("%lf", &number);
        total += number;
    }

    average = total / count;
    printf("\nTotal: %.2f\n", total);
    printf("Average: %.2f\n", average);

    return 0;
}
