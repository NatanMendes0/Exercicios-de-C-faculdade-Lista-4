#include <stdio.h>

int main() {
    float saldoMedio, credito;

    printf("Digite o saldo médio do cliente: ");
    scanf("%f", &saldoMedio);

    if (saldoMedio >= 0 && saldoMedio <= 200) {
        credito = 0;
    } else if (saldoMedio >= 201 && saldoMedio <= 400) {
        credito = saldoMedio * 0.2;
    } else if (saldoMedio >= 401 && saldoMedio <= 600) {
        credito = saldoMedio * 0.3;
    } else if (saldoMedio > 600) {
        credito = saldoMedio * 0.4;
    }

    printf("Saldo médio: %.2f\n", saldoMedio);
    printf("Valor do crédito: %.2f\n", credito);

    return 0;
}