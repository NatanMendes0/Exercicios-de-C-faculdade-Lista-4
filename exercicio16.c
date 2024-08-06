#include <stdio.h>

int main() {
    int age;
    float monthlyPayment;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 10) {
        monthlyPayment = 30.00;
    } else if (age <= 29) {
        monthlyPayment = 60.00;
    } else if (age <= 45) {
        monthlyPayment = 120.00;
    } else if (age <= 59) {
        monthlyPayment = 150.00;
    } else if (age <= 65) {
        monthlyPayment = 250.00;
    } else {
        monthlyPayment = 400.00;
    }

    printf("Your monthly payment is: R$%.2f\n", monthlyPayment);

    return 0;
}