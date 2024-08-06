#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0 && (number * 3) < 0) {
        int result = number * 2;
        printf("The result is: %d\n", result);
    }

    return 0;
}