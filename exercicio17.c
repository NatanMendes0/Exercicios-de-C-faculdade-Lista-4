#include <stdio.h>
#include <string.h>

int main() {
    char destino[20];
    int idaVolta;
    float valorPassagem;

    printf("Informe o destino do passageiro: ");
    scanf("%s", destino);

    printf("A viagem inclui retorno (ida e volta)? (1 - Sim / 0 - Não): ");
    scanf("%d", &idaVolta);

    if (strcmp(destino, "Região Norte") == 0) {
        if (idaVolta) {
            valorPassagem = 900.00;
        } else {
            valorPassagem = 500.00;
        }
    } else if (strcmp(destino, "Região Nordeste") == 0) {
        if (idaVolta) {
            valorPassagem = 600.00;
        } else {
            valorPassagem = 650.00;
        }
    } else if (strcmp(destino, "Região Centro-Oeste") == 0 || strcmp(destino, "Região Sul") == 0) {
        if (idaVolta) {
            valorPassagem = 300.00;
        } else {
            valorPassagem = 350.00;
        }
    } else {
        printf("Destino inválido!\n");
        return 0;
    }

    printf("O valor da passagem é: R$%.2f\n", valorPassagem);

    return 0;
}