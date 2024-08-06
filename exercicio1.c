#include <stdio.h>

int main()
{
    float preco;
    int codigo;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    printf("Digite o código de origem: ");
    scanf("%d", &codigo);

    if (codigo == 1)
    {
        printf("Preço: R$ %.2f - Procedência: Sul\n", preco);
    }
    else if (codigo == 2)
    {
        printf("Preço: R$ %.2f - Procedência: Norte\n", preco);
    }
    else if (codigo == 3)
    {
        printf("Preço: R$ %.2f - Procedência: Leste\n", preco);
    }
    else if (codigo == 4)
    {
        printf("Preço: R$ %.2f - Procedência: Oeste\n", preco);
    }
    else if (codigo == 5 || codigo == 6)
    {
        printf("Preço: R$ %.2f - Procedência: Nordeste\n", preco);
    }
    else if (codigo == 7 || codigo == 8 || codigo == 9)
    {
        printf("Preço: R$ %.2f - Procedência: Sudeste\n", preco);
    }
    else if (codigo >= 10 && codigo <= 20)
    {
        printf("Preço: R$ %.2f - Procedência: Centro-Oeste\n", preco);
    }
    else if (codigo >= 25 && codigo <= 50)
    {
        printf("Preço: R$ %.2f - Procedência: Nordeste\n", preco);
    }
    else
    {
        printf("Preço: R$ %.2f - Procedência: Importado\n", preco);
    }

    return 0;
}