#include <stdio.h>

int main() {

    char pais1[100], pais2[100];
    unsigned long int popu1, popu2;
    float area1, area2, pib1, pib2;
    int pnt1, pntc2;
    float Densidade1, Densidade2;
    int escolha;
    float compg1, compg2;
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

    Densidade1 = (float) popu1 / area1;

    Densidade2 = (float) popu2 / area2;

    compg1 = (float) popu1 + area1 + pib1 + pnt1 + (1.0 / Densidade1);

    compg2 = (float) popu2 + area2 + pib2 + pntc2 + (1.0 / Densidade2);

    printf("--- MENU DE COMPARAÇÃO ---");
        printf("\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("0 - Comparação geral\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

        printf("\n");
    printf("------Comparação das cartas------ \n");
        printf("\n");

    switch (escolha)
    {
    case 1:
        printf("população: \n%s = %lu\n%s = %lu\n", pais1, popu1, pais2, popu2);
        if (popu1>popu2)
        {
            printf("O vencedor é %s\n", pais1);
        }   else if (popu2>popu1)   
        {
            printf("O vencedor é %s\n", pais2);
        } else
        {
            printf("empate");
        }  
        break;
    case 2:
        printf("area: \n%s = %.2f\n%s = %.2f\n", pais1, area1, pais2, area2);
        if (area1 > area2)
        {
            printf("O vencedor é %s\n", pais1);
        }   else if (area2 > area1)   
        {
            printf("O vencedor é %s\n", pais2);
        } else
        {
            printf("empate");
        }  
        break;
    case 3:
        printf("PIB: \n%s = %.2f\n%s = %.2f\n", pais1, pib1, pais2, pib2);
        if (pib1 > pib2)
        {
            printf("O vencedor é %s\n", pais1);
        }   else if (pib2 > pib1)   
        {
            printf("O vencedor é %s\n", pais2);
        } else
        {
            printf("empate");
        }  
        break;
    case 4:
        printf("Pontos turísticos: \n%s = %d\n%s = %d\n", pais1, pnt1, pais2, pntc2);
        if (pnt1 < pntc2)
        {
            printf("O vencedor é %s\n", pais1);
        }   else if (pntc2 < pnt1)  
        {
            printf("O vencedor é %s\n", pais2);
        } else
        {
            printf("empate");
        }  
        break;
    case 5:
        printf("Densidade demográfica: \n%s = %.1f\n%s = %.1f\n", pais1, Densidade1, pais2, Densidade2);
        if (Densidade1 > Densidade2)
        {
            printf("O vencedor é %s\n", pais1);
        }   else if (Densidade2 > Densidade1)  
        {
            printf("O vencedor é %s\n\n", pais2);
        } else
        {
            printf("empate");
        }  
        break;
    case 0:
        printf("comparação geral entre: \n%s\n e \n%s\n", pais1, pais2);
        if (compg1 > compg2)
        {
            printf("O vencedor é %s\n", pais1);
        }   else if (compg2 > compg1)  
        {
            printf("O vencedor é %s\n\n", pais2);
        } else
        {
            printf("empate");
        }  
        break;
    
    default:
        printf("algo deu errado");
        break;
    }
    printf("\n");
    printf("fim do joguin");
    printf("\n");

    return 0;
}
