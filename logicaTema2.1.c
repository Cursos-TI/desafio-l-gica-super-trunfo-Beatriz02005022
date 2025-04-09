#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo - Comparação de Cartas\n");

    // Dados da Carta 1 - São Paulo
    char Estado1[] = "São Paulo";
    char Codigocarta1[] = "SP001";
    char NomeCidade1[] = "São Paulo";
    int Populacao1 = 12300000;
    float AreaCidade1 = 1521.11;
    float PIB1 = 799.02; // Em bilhões
    int PontosTuristicos1 = 50;

    // Dados da Carta 2 - Rio de Janeiro
    char Estado2[] = "Rio de Janeiro";
    char Codigocarta2[] = "RJ002";
    char NomeCidade2[] = "Rio de Janeiro";
    int Populacao2 = 6748000;
    float AreaCidade2 = 1182.30;
    float PIB2 = 343.66; // Em bilhões
    int PontosTuristicos2 = 40;

    // Cálculo da Densidade Populacional e PIB per capita
    float Densidade1 = Populacao1 / AreaCidade1;
    float Densidade2 = Populacao2 / AreaCidade2;

    // Correção do cálculo de PIB per capita (em bilhões por habitante)
    float PIBperCapita1 = PIB1 / Populacao1;
    float PIBperCapita2 = PIB2 / Populacao2;

    // Comparação de atributos
    printf("\nComparação de Atributos:\n");

    // População
    printf("\nPopulação:\n");
    if (Populacao1 > Populacao2) {
        printf("Vencedora: Carta 1 (%s) - %d habitantes\n", NomeCidade1, Populacao1);
    } else {
        printf("Vencedora: Carta 2 (%s) - %d habitantes\n", NomeCidade2, Populacao2);
    }

    // Área
    printf("\nÁrea:\n");
    if (AreaCidade1 > AreaCidade2) {
        printf("Vencedora: Carta 1 (%s) - %.2f km²\n", NomeCidade1, AreaCidade1);
    } else {
        printf("Vencedora: Carta 2 (%s) - %.2f km²\n", NomeCidade2, AreaCidade2);
    }

    // PIB
    printf("\nPIB:\n");
    if (PIB1 > PIB2) {
        printf("Vencedora: Carta 1 (%s) - %.2f bilhões\n", NomeCidade1, PIB1);
    } else {
        printf("Vencedora: Carta 2 (%s) - %.2f bilhões\n", NomeCidade2, PIB2);
    }

    // Pontos Turísticos
    printf("\nPontos Turísticos:\n");
    if (PontosTuristicos1 > PontosTuristicos2) {
        printf("Vencedora: Carta 1 (%s) - %d pontos turísticos\n", NomeCidade1, PontosTuristicos1);
    } else {
        printf("Vencedora: Carta 2 (%s) - %d pontos turísticos\n", NomeCidade2, PontosTuristicos2);
    }

    // Densidade Populacional
    printf("\nDensidade Populacional:\n");
    if (Densidade1 < Densidade2) {
        printf("Vencedora: Carta 1 (%s) - %.2f hab/km²\n", NomeCidade1, Densidade1);
    } else {
        printf("Vencedora: Carta 2 (%s) - %.2f hab/km²\n", NomeCidade2, Densidade2);
    }

    // PIB per capita
    printf("\nPIB per capita:\n");
    if (PIBperCapita1 > PIBperCapita2) {
        printf("Vencedora: Carta 1 (%s) - %.8f bilhões/habitante\n", NomeCidade1, PIBperCapita1);
    } else {
        printf("Vencedora: Carta 2 (%s) - %.8f bilhões/habitante\n", NomeCidade2, PIBperCapita2);
    }

    return 0;
}