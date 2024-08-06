#include <stdio.h>

int main() {
    float salario, salario_final;
    int classe;

    printf("Digite o salário do jogador: ");
    scanf("%f", &salario);

    printf("Digite o código da classe do jogador: ");
    scanf("%d", &classe);

    switch (classe) {
        case 1:
            salario_final = salario + (salario * 1.0);
            printf("Classe: excelente\n");
            break;
        case 2:
            salario_final = salario + (salario * 0.8);
            printf("Classe: bom\n");
            break;
        case 3:
            salario_final = salario + (salario * 0.5);
            printf("Classe: médio\n");
            break;
        case 4:
            salario_final = salario + (salario * 0.3);
            printf("Classe: regular\n");
            break;
        case 5:
            salario_final = salario + (salario * 0.1);
            printf("Classe: precisa treinar mais\n");
            break;
        case 6:
            salario_final = salario + (salario * 0.05);
            printf("Classe: te cuida\n");
            break;
        case 7:
            salario_final = salario;
            printf("Classe: passe no Dep. Pessoal\n");
            break;
        default:
            printf("Código de classe inválido\n");
            return 1;
    }

    printf("Salário final: %.2f\n", salario_final);

    return 0;
}