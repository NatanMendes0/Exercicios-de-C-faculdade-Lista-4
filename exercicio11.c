#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("Your BMI is %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Weight condition: Below normal weight\n");
    } else if (bmi >= 18.5 && bmi < 25) {
        printf("Weight condition: Normal weight\n");
    } else if (bmi >= 25 && bmi < 30) {
        printf("Weight condition: Overweight\n");
    } else {
        printf("Weight condition: Obese\n");
    }

    return 0;
}