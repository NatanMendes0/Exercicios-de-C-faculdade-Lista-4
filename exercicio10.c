#include <stdio.h>

int main() {
    char nome[50];
    char sexo;
    char estadoCivil[10];
    int tempoCasada;

    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("Digite o estado civil: ");
    scanf("%s", estadoCivil);

    if (sexo == 'F' && strcmp(estadoCivil, "CASADA") == 0) {
        printf("Digite o tempo de casada (anos): ");
        scanf("%d", &tempoCasada);
    }

    return 0;
}