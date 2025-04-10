#include <stdio.h>

int main() {

    char pais1[100], pais2[100];
    unsigned long int popu1, popu2;
    float area1, area2, pib1, pib2;
    int pnt1, pntc2;
    float densidade1, densidade2;
    int escolha1, escolha2;
    float soma1 = 0, soma2 = 0;
    float valor1a = 0, valor2a = 0;
    float valor1b = 0, valor2b = 0;

        printf("\n");   

    printf("----- Dados da primeira carta ----- \n");
    
        printf("\n");
    printf("Escolha o país desejado (ex: Brasil): \n");
    scanf(" %[^\n]", pais1);
        printf("\n");
    printf("Qual a populaçao do país escolhido? (ex: 15000000): \n");
    scanf("%lu", &popu1);
        printf("\n");
    printf("Area do país escolhido em quilômetros quadrados (ex: 564.50): \n");
    scanf("%f", &area1);
        printf("\n");
    printf("PIB do país em bilhoes (ex: 564.50): \n");
    scanf("%f", &pib1);
        printf("\n");
    printf("Quantidade de Pontos Turistico do país: \n");
    scanf("%d", &pnt1);
        printf("\n");

    printf("----- Dados da segunda carta ----- \n");

        printf("\n");
    printf("Escolha o país desejado (ex: Brasil): \n");
    scanf(" %[^\n]", pais2);
        printf("\n");
    printf("Qual a populaçao do país escolhido? (ex: 15000000): \n");
    scanf("%lu", &popu2);
        printf("\n");
    printf("Area do país escolhido em quilômetros quadrados (ex: 564.50): \n");
    scanf("%f", &area2);
        printf("\n");
    printf("PIB do país em bilhoes (ex: 125.23): \n");
    scanf("%f", &pib2);
        printf("\n");
    printf("Quantidade de Pontos Turistico do país: \n");
    scanf("%d", &pntc2);

    densidade1 = popu1 / area1;
    densidade2 = popu2 / area2;

    soma1 = valor1a + valor1b;
    soma2 = valor2a + valor2b;

    printf("--- MENU DE COMPARAÇÃO ---");
        printf("\n");
    printf("atributos para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");

        printf("\n");

    printf("escolha o primeiro atributo: ");
    scanf("%d", &escolha1);

    switch (escolha1) {
        case 1:
            printf("população\n");
            valor1a = popu1;
            valor2a = popu2;
            break;
        case 2:
            printf("Área\n");
            valor1a = area1;
            valor2a = area2;
            break;
        case 3:
            printf("PIB\n");
            valor1a = pib1;
            valor2a = pib2;
            break;
        case 4:
            printf("pontos turisticos\n");
            valor1a = pnt1;
            valor2a = pntc2;
            break;
        case 5:
            printf("densidade demografica\n");
            valor1a = 1 / densidade1;
            valor2a = 1 / densidade2;
            break;
        default:
            printf("algo deu errado\n");
            break;
    }

        printf("\n");

    printf("Escolha o segundo atributo (diferente do primeiro): ");
    scanf("%d", &escolha2);

//caso a escolha do usuario seja errada

    if (escolha2 == escolha1) {
        printf("Erro: atributo repetido. Digite outro: ");
        scanf("%d", &escolha2);
    }

    switch (escolha2) {
        case 1:
        printf("população\n");
        valor1a = popu1;
        valor2a = popu2;
        break;
    case 2:
        printf("Área\n");
        valor1a = area1;
        valor2a = area2;
        break;
    case 3:
        printf("PIB\n");
        valor1a = pib1;
        valor2a = pib2;
        break;
    case 4:
        printf("pontos turisticos\n");
        valor1a = pnt1;
        valor2a = pntc2;
        break;
    case 5:
        printf("densidade demografica\n");
        valor1a = 1 / densidade1;
        valor2a = 1 / densidade2;
        break;
    default:
        printf("algo deu errado\n");
        break;
}

    soma1 = valor1a + valor1b;
    soma2 = valor2a + valor2b;

        printf("\n");

    printf("Comparação dos Atributos\n");
    printf("%s: %.2f pontos\n", pais1, soma1);
    printf("%s: %.2f pontos\n", pais2, soma2);
        printf("\n");
    printf("Resultado Final\n");
        printf("\n");
    if (soma1 > soma2) {
        printf("VENCEDOR: %s\n", pais1);
    } else if (soma2 > soma1) {
        printf("VENCEDOR: %s\n", pais2);
    } else {
        printf("EMPATE!\n");
    }


    printf("\n");
    printf("fim do joguin\n");
    printf("\n");

    return 0;
}
