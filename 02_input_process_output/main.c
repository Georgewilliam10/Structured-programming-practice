#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, num3;
    int sum, product;
    double average;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    average = sum / 3.0;
    product = num1 * num2 * num3;

    printf("Sum is %d\n", sum);
    printf("Average is %.2f\n", average);
    printf("Product is %d\n", product);

    return 0;
}
