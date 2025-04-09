include <stdio.h>
 
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
 
     int opcao;
 
     // Menu Interativo
     printf("\nEscolha o atributo para comparação:\n");
     printf("1. População\n");
     printf("2. Área\n");
     printf("3. PIB\n");
     printf("4. Pontos Turísticos\n");
     printf("5. Densidade Demográfica\n");
     printf("Sua opção: ");
     scanf("%d", &opcao);
 
     // Lógica de comparação
     switch (opcao) {
         case 1:
             printf("\nPopulação:\n");
             printf("%s: %d habitantes\n", NomeCidade1, Populacao1);
             printf("%s: %d habitantes\n", NomeCidade2, Populacao2);
             if (Populacao1 > Populacao2) {
                 printf("Vencedora: Carta 1 (%s)\n", NomeCidade1);
             } else if (Populacao2 > Populacao1) {
                 printf("Vencedora: Carta 2 (%s)\n", NomeCidade2);
             } else {
                 printf("Empate!\n");
             }
             break;
         case 2:
             printf("\nÁrea:\n");
             printf("%s: %.2f km²\n", NomeCidade1, AreaCidade1);
             printf("%s: %.2f km²\n", NomeCidade2, AreaCidade2);
             if (AreaCidade1 > AreaCidade2) {
                 printf("Vencedora: Carta 1 (%s)\n", NomeCidade1);
             } else if (AreaCidade2 > AreaCidade1) {
                 printf("Vencedora: Carta 2 (%s)\n", NomeCidade2);
             } else {
                 printf("Empate!\n");
             }
             break;
         case 3:
             printf("\nPIB:\n");
             printf("%s: %.2f bilhões\n", NomeCidade1, PIB1);
             printf("%s: %.2f bilhões\n", NomeCidade2, PIB2);
             if (PIB1 > PIB2) {
                 printf("Vencedora: Carta 1 (%s)\n", NomeCidade1);
             } else if (PIB2 > PIB1) {
                 printf("Vencedora: Carta 2 (%s)\n", NomeCidade2);
             } else {
                 printf("Empate!\n");
             }
             break;
         case 4:
             printf("\nPontos Turísticos:\n");
             printf("%s: %d pontos turísticos\n", NomeCidade1, PontosTuristicos1);
             printf("%s: %d pontos turísticos\n", NomeCidade2, PontosTuristicos2);
             if (PontosTuristicos1 > PontosTuristicos2) {
                 printf("Vencedora: Carta 1 (%s)\n", NomeCidade1);
             } else if (PontosTuristicos2 > PontosTuristicos1) {
                 printf("Vencedora: Carta 2 (%s)\n", NomeCidade2);
             } else {
                 printf("Empate!\n");
             }
             break;
         case 5:
             printf("\nDensidade Demográfica:\n");
             printf("%s: %.2f hab/km²\n", NomeCidade1, Densidade1);
             printf("%s: %.2f hab/km²\n", NomeCidade2, Densidade2);
             if (Densidade1 < Densidade2) {
                 printf("Vencedora: Carta 1 (%s)\n", NomeCidade1);
             } else if (Densidade2 < Densidade1) {
                 printf("Vencedora: Carta 2 (%s)\n", NomeCidade2);
             } else {
                 printf("Empate!\n");
             }
             break;
         default:
             printf("\nOpção inválida! Por favor, escolha uma opção válida.\n");
     }
 
     return 0;
 }