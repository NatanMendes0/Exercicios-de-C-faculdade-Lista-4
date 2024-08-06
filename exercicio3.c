#include <stdio.h>

int main() {
    int code, quantity;
    float price, total;

    printf("Enter the product code: ");
    scanf("%d", &code);

    printf("Enter the quantity purchased: ");
    scanf("%d", &quantity);

    switch (code) {
        case 1001:
            price = 5.32;
            break;
        case 1324:
            price = 6.45;
            break;
        case 0987:
            price = 2.37;
            break;
        case 7623:
            price = 5.32;
            break;
        case 6548:
            price = 6.45;
            break;
        default:
            printf("Invalid product code!\n");
            return 0;
    }

    total = price * quantity;

    printf("Total price: R$ %.2f\n", total);

    return 0;
}