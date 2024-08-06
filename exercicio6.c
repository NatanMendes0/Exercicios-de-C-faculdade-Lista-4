#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    float valorConta;

    printf("Digite o primeiro nome do cliente: ");
    scanf("%s", nome);

    printf("Digite o valor da conta: ");
    scanf("%f", &valorConta);

    if (nome[0] == 'A' || nome[0] == 'D' || nome[0] == 'M' || nome[0] == 'S') {
        float desconto = valorConta * 0.3;
        float valorComDesconto = valorConta - desconto;
        printf("Desconto de 30%% aplicado! Valor com desconto: R$ %.2f\n", valorComDesconto);
    } else {
        printf("Que pena. Nesta semana o desconto não é para seu nome, mas continue nos prestigiando que sua vez chegará.\n");
    }

    return 0;
}