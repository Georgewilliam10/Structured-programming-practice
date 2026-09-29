#include <stdio.h>
#include <stdlib.h>

int main() {
    int sum = 0;

    for (int number = 2; number <= 100; number += 2) {
        sum += number;
    }

    printf("Sum of even integers from 2 to 100 is: %d\n", sum);

    return 0;
}
