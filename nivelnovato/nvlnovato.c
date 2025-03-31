#include <stdio.h>

int main() {

    char estado1[100];  
    char codi1[100];
    char cidade1[100];
    unsigned long int popu1;
    float area1;
    float pib1;
    int pnt1;
    float DensidadePopu1;
    float PIBperCap1;
    float SuperPoder1;

    char estd2[100];
    char codigo2[100];
    char cidade2[100];
    unsigned long int popu2;
    float area2;
    float pib2;
    int pntc2;
    float DensiPopulacional2;
    float PIBpc2;
    float SuperPoder2;

        printf("\n");   

    printf("----- Dados da primeira carta ----- \n");

        printf("\n");
    
    printf("Estado: Uma letra de 'A' a 'H' (Representando um dos oito estados) \n");
    scanf("%s", estado1);
        printf("\n");   
    printf("Codigo da carta, a letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
    scanf("%s", codi1);
        printf("\n");
    printf("Escolha a cidade desejada (ex: Rio De Janeiro): \n");
    scanf(" %[^\n]", cidade1);
        printf("\n");
    printf("Qual a populaçao da Cidade escolhida? (ex: 15000): \n");
    scanf("%lu", &popu1);
        printf("\n");
    printf("Area da cidade escolhida em quilômetros quadrados (ex: 564.50): \n");
    scanf("%f", &area1);
        printf("\n");
    printf("PIB da cidade em bilhoes (ex: 564.50): \n");
    scanf("%f", &pib1);
        printf("\n");
    printf("Quantidade de Pontos Turistico da cidade: \n");
    scanf("%d", &pnt1);

        printf("\n");

    printf("----- Dados da segunda carta ----- \n");

        printf("\n");

    printf("Estado: Uma letra de 'A' a 'H' (representando um dos oito estados) \n");
    scanf("%s", estd2);
        printf("\n");
    printf("Codigo da carta, a letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
    scanf("%s", codigo2);
        printf("\n");
    printf("Escolha a cidade desejada (ex: São Paulo): \n");
    scanf(" %[^\n]", cidade2);
        printf("\n");
    printf("Qual a populaçao da Cidade escolhida? (ex: 15000000): \n");
    scanf("%lu", &popu2);
        printf("\n");
    printf("Area da cidade escolhida em quilômetros quadrados (ex: 564.50): \n");
    scanf("%f", &area2);
        printf("\n");
    printf("PIB da cidade em bilhoes (ex: 125.23): \n");
    scanf("%f", &pib2);
        printf("\n");
    printf("Quantidade de Pontos Turistico da cidade: \n");
    scanf("%d", &pntc2);

    DensidadePopu1 = (float) popu1 / area1;
    PIBperCap1 = (float) popu1 / pib1;

    DensiPopulacional2 = (float) popu2 / area2;
    PIBpc2 =  (float) popu2 / pib2;

        printf("\n");

/*prineira carta*/

    printf(" ----- Resultados da primeira carta e segunda carta ----- \n");
        printf("\n");

    printf("Estado 1: %s \n", estado1);
        printf("\n");
    printf("Estado 2: %s\n", estd2);
        printf("\n");

    printf("Codigo 1: %s \n", codi1);
        printf("\n");
    printf("Codigo 2: %s\n", codigo2);
        printf("\n");

    printf("Cidade 1: %s \n", cidade1);
        printf("\n");
    printf("Cidade 2: %s\n", cidade2);
        printf("\n");

    printf("População 1: %lu\n", popu1);
        printf("\n");
    printf("População 2: %lu\n", popu2);
        printf("\n");

    printf("Area 1: %.2f km2\n", area1);
        printf("\n");
    printf("Area 2: %.2f km2\n", area2);
        printf("\n");

    printf("Pib 1: R$ %.2f bilhões \n", pib1);
        printf("\n");
    printf("Pib 2: R$ %.2f bilhões \n", pib2);
        printf("\n");

    printf("Número de Pontos Turísticos 1: %d \n", pnt1);
        printf("\n");
    printf("Número de Pontos Turísticos 2: %d \n", pntc2);
        printf("\n");

    printf("Densidade Populacional 1: %.2f \n", DensidadePopu1);
        printf("\n");
    printf("Densidade Populacional 2: %.2f \n", DensiPopulacional2);
        printf("\n");

    printf("PIB per Capita 1: %.2f \n", PIBperCap1);
        printf("\n");
    printf("PIB per Capita 2: %.2f \n", PIBpc2);
        printf("\n");
//calculo de comparação

    SuperPoder1 = popu1 + area1 + pib1 + pnt1 + PIBperCap1 + (1.0 / DensidadePopu1);
    SuperPoder2 = popu2 + area2 + pib2 + pntc2 + PIBpc2 + (1.0 / DensiPopulacional2);

    unsigned long int rpopu = 2 - (popu1 > popu2);
    float rarea =  2 - (area1 > area2);
    float rpib = 2 - (pib1 > pib2);
    int rpt = 2 - (pnt1 > pntc2);
    float rdp = 2 - (DensidadePopu1 > DensiPopulacional2);
    float rppc = 2 - (PIBperCap1 > PIBpc2);
    float rspdr = 2 - (SuperPoder1 > SuperPoder2); 

    printf("------Comparação das cartas------ \n");
        printf("\n");
    printf("População: Carta (%d) venceu \n", (int)rpopu);
        printf("\n");
    printf("Área: Carta (%d) venceu \n", (int)rarea);
        printf("\n");
    printf("PIB: Carta (%d) venceu \n", (int)rpib);
        printf("\n");
    printf("Pontos Turísticos: Carta (%d) venceu \n", (int)rpt);
        printf("\n");
    printf("Densidade Populacional: Carta (%d) venceu \n", (int)rdp);
        printf("\n");
    printf("PIB per Capita: Carta (%d) venceu \n", (int)rppc);
        printf("\n");
    printf("Super Poder: Carta (%d) venceu \n", (int)rspdr);

        printf("\n");
    printf("FIM\n");
        printf("\n");
    return 0;

}