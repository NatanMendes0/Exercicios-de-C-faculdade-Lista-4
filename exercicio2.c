#include <stdio.h>

float convertCurrency(float amount, int choice) {
    float convertedAmount;
    
    switch(choice) {
        case 1:
            convertedAmount = amount / 3.80;
            break;
        case 2:
            convertedAmount = amount / 1.85;
            break;
        case 3:
            convertedAmount = amount / 2.43;
            break;
        case 4:
            convertedAmount = amount / 2.31;
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }
    
    return convertedAmount;
}

int main() {
    float amount;
    int choice;
    
    printf("Enter the amount in reais: ");
    scanf("%f", &amount);
    
    printf("Choose the currency to convert to:\n");
    printf("1 - Libra esterlina\n");
    printf("2 - Franco suiço\n");
    printf("3 - Dólar americano\n");
    printf("4 - Marco alemão\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    float convertedAmount = convertCurrency(amount, choice);
    
    if (convertedAmount != 0) {
        printf("Converted amount: %.2f\n", convertedAmount);
    }
    
    return 0;
}