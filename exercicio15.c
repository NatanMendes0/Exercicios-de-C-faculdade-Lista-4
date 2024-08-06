#include <stdio.h>

int main() {
    int age;

    printf("Digite a idade da pessoa: ");
    scanf("%d", &age);

    if (age >= 18 && age <= 67) {
        printf("A pessoa pode doar sangue.\n");
    } else {
        printf("A pessoa não pode doar sangue.\n");
    }

    return 0;
}