#include <stdio.h>

int main() {
    int cargo;
    float salario, novoSalario, aumento;

    printf("Digite o cargo do funcionário (1-Gerente, 2-Engenheiro, 3-Técnico): ");
    scanf("%d", &cargo);

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    switch (cargo) {
        case 1:
            aumento = salario * 0.10;
            break;
        case 2:
            aumento = salario * 0.20;
            break;
        case 3:
            aumento = salario * 0.30;
            break;
        default:
            aumento = salario * 0.40;
            break;
    }

    novoSalario = salario + aumento;

    printf("Salário antigo: R$ %.2f\n", salario);
    printf("Novo salário: R$ %.2f\n", novoSalario);
    printf("Diferença: R$ %.2f\n", aumento);

    return 0;
}