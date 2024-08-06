#include <stdio.h>

int main() {
    char cor[10];
    int quantidade;
    float preco, total;

    printf("Digite a cor do DVD: ");
    scanf("%s", cor);

    if (strcmp(cor, "Azul") == 0) {
        preco = 10.00;
    } else if (strcmp(cor, "Rosa") == 0) {
        preco = 25.00;
    } else if (strcmp(cor, "Verde") == 0) {
        preco = 35.00;
    } else if (strcmp(cor, "Vermelho") == 0) {
        preco = 50.00;
    } else {
        printf("Cor inválida!\n");
        return 0;
    }

    printf("Digite a quantidade de DVDs que deseja levar: ");
    scanf("%d", &quantidade);

    total = preco * quantidade;

    printf("Quantidade de DVDs: %d\n", quantidade);
    printf("Valor do DVD: R$ %.2f\n", preco);
    printf("Valor total: R$ %.2f\n", total);

    return 0;
}