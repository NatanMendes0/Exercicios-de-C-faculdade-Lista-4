#include <stdio.h>

int main() {
    int dia, mes;
    char nome[50];

    printf("Digite o dia do seu nascimento: ");
    scanf("%d", &dia);

    printf("Digite o mês do seu nascimento: ");
    scanf("%d", &mes);

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 20)) {
        printf("%s, você é do signo de Áries.\n", nome);
    } else if ((mes == 4 && dia >= 21) || (mes == 5 && dia <= 20)) {
        printf("%s, você é do signo de Touro.\n", nome);
    } else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
        printf("%s, você é do signo de Gêmeos.\n", nome);
    } else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) {
        printf("%s, você é do signo de Câncer.\n", nome);
    } else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)) {
        printf("%s, você é do signo de Leão.\n", nome);
    } else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
        printf("%s, você é do signo de Virgem.\n", nome);
    } else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
        printf("%s, você é do signo de Libra.\n", nome);
    } else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
        printf("%s, você é do signo de Escorpião.\n", nome);
    } else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
        printf("%s, você é do signo de Sagitário.\n", nome);
    } else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 20)) {
        printf("%s, você é do signo de Capricórnio.\n", nome);
    } else if ((mes == 1 && dia >= 21) || (mes == 2 && dia <= 18)) {
        printf("%s, você é do signo de Aquário.\n", nome);
    } else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 19)) {
        printf("%s, você é do signo de Peixes.\n", nome);
    } else {
        printf("Data de nascimento inválida.\n");
    }

    return 0;
}