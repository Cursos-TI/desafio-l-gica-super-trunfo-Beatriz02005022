#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo - Comparação de Cartas\n\n");

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

    // Cálculo da Densidade Populacional
    float Densidade1 = Populacao1 / AreaCidade1;
    float Densidade2 = Populacao2 / AreaCidade2;

    int opcao1, opcao2;

    // Menu Interativo para Escolha de Atributos
    printf("Escolha dois atributos para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");

    printf("\nEscolha o primeiro atributo: ");
    scanf("%d", &opcao1);

    do {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &opcao2);
        if (opcao1 == opcao2) {
            printf("Erro: Você deve escolher atributos diferentes!\n");
        }
    } while (opcao1 == opcao2);

    // Variáveis para Soma dos Atributos
    float Soma1 = 0, Soma2 = 0;

    // Função para Comparar Atributos
    void comparar(int atributo, const char *nomeAtributo) {
        printf("\n%s:\n", nomeAtributo);
        float valor1 = (atributo == 1) ? Populacao1 : 
                       (atributo == 2) ? AreaCidade1 : 
                       (atributo == 3) ? PIB1 : 
                       (atributo == 4) ? PontosTuristicos1 : Densidade1;

        float valor2 = (atributo == 1) ? Populacao2 : 
                       (atributo == 2) ? AreaCidade2 : 
                       (atributo == 3) ? PIB2 : 
                       (atributo == 4) ? PontosTuristicos2 : Densidade2;

        printf("%s: %.2f\n", NomeCidade1, valor1);
        printf("%s: %.2f\n", NomeCidade2, valor2);

        if ((atributo == 5 && valor1 < valor2) || (atributo != 5 && valor1 > valor2)) {
            printf("Vencedora: Carta 1 (%s)\n", NomeCidade1);
        } else if ((atributo == 5 && valor2 < valor1) || (atributo != 5 && valor2 > valor1)) {
            printf("Vencedora: Carta 2 (%s)\n", NomeCidade2);
        } else {
            printf("Empate!\n");
        }

        Soma1 += valor1;
        Soma2 += valor2;
    }

    // Comparação dos Atributos Selecionados
    comparar(opcao1, "Primeiro Atributo");
    comparar(opcao2, "Segundo Atributo");

    // Soma dos Atributos e Resultado Final
    printf("\nSoma dos Atributos:\n");
    printf("%s: %.2f\n", NomeCidade1, Soma1);
    printf("%s: %.2f\n", NomeCidade2, Soma2);

    if (Soma1 > Soma2) {
        printf("Vencedora Final: Carta 1 (%s)\n", NomeCidade1);
    } else if (Soma2 > Soma1) {
        printf("Vencedora Final: Carta 2 (%s)\n", NomeCidade2);
    } else {
        printf("Empate Final!\n");
    }

    return 0;
}