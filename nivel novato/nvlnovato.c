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

    SuperPoder1 = popu1 + area1 + pib1 + pnt1 + PIBperCap1 + (1.0 / DensidadePopu1);
    SuperPoder2 = popu2 + area2 + pib2 + pntc2 + PIBpc2 + (1.0 / DensiPopulacional2);

    printf("------Comparação das cartas------ \n");
        printf("\n");

    if (popu1 > popu2) {
        printf("Carta 1 (%s) venceu, com a População de:  %lu\n", cidade1, popu1);
    }   else {
        printf("Carta 2 (%s) venceu, com a População de:  %lu\n", cidade2, popu2);
    }
            printf("\n");
    
    if (area1 > area2) {
        printf("Carta 1 (%s) venceu, com a Área de:  %.2f km2\n", cidade1, area1);
    } else {
        printf("Carta 2 (%s) venceu, com a Área de:  %.2f km2\n", cidade2, area2);
    }
            printf("\n");
    
    if (pib1 > pib2) {
        printf("Carta 1 (%s) venceu, com o PIB de:  %.2f bilhões\n", cidade1, pib1);
    } else {
        printf("Carta 2 (%s) venceu, com o PIB de:  %.2f bilhões\n", cidade2, pib2);
    }
            printf("\n");
    
    if (pnt1 > pntc2) {
        printf("Carta 1 (%s) venceu, com %d Pontos Turísticos \n", cidade1, pnt1);
    } else {
        printf("Carta 2 (%s) venceu, com %d Pontos Turísticos \n",  cidade2, pntc2);
    }
            printf("\n");
    
    if (DensidadePopu1 < DensiPopulacional2) {
        printf("Carta 1 (%s) venceu, com a menor Densidade Populacional de:  %.2f\n", cidade1, DensidadePopu1);
    }   else {
        printf("Carta 2 (%s) venceu, com a menor Densidade Populacional de:  %.2f\n", cidade2, DensiPopulacional2);
    }
            printf("\n");
            
    if (PIBperCap1 > PIBpc2) {
        printf("Carta 1 (%s) venceu, com o PIB per Capita de:  %.2f\n", cidade1, PIBperCap1);
    }   else {
        printf("Carta 2 (%s) venceu, com o PIB per Capita de:  %.2f\n", cidade2, PIBpc2);
    }
            printf("\n");
    
    if (SuperPoder1 > SuperPoder2){
        printf("Carta 1 (%s) venceu o desafio com maior Super Poder \n", cidade1);
    }   else {
        printf("Carta 2 (%s) venceu o desafio com maior Super Poder \n", cidade2);
    }
        printf("\n");
    printf("FIM\n");
        printf("\n");
    return 0;

}
