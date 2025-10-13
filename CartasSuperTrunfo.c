#include <stdio.h>

int main()
{
    // Desafio Super Trunfo
    // Este código cadastra duas cartas, calcula seus atributo e compara pra ver qual vence.

    // Declarando Variaveis da Carta 1
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Declarando Variaveis da Carta 2
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // Coletando os dado da Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Informe a Populacao: ");
    scanf("%lu", &populacao1);

    printf("Informe a Area (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Coletando os dado da Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Informe a Populacao: ");
    scanf("%lu", &populacao2);

    printf("Informe a Area (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculando Atributos Derivados
    // Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1; // Formula corrigida

    // Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2; // Formula corrigida

    // Calculando o Super Poder
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

    // Exibindo Dados Completos das Cartas
    printf("\n\n======================================\n");
    printf("         CARTAS CADASTRADAS\n");
    printf("======================================\n");
    
    printf("\nCARTA 1\n");
    printf("Populacao: %lu habitantes\n", populacao1); 
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\nCARTA 2\n");
    printf("Populacao: %lu habitantes\n", populacao2); 
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);


    // Compara os atributo e mostra o vencedor
    int vencedorPopulacao = populacao1 > populacao2;
    int vencedorArea = area1 > area2;
    int vencedorPib = pib1 > pib2;
    int vencedorPontos = pontosTuristicos1 > pontosTuristicos2;
    int vencedorDensidade = densidadePopulacional1 < densidadePopulacional2; 
    int vencedorPIBperCapita = pibPerCapita1 > pibPerCapita2;
    int vencedorSuperPoder = superPoder1 > superPoder2;

    printf("\n\n======================================\n");
    printf("        RESULTADO DA BATALHA\n");
    printf("======================================\n");

    printf("Populacao:              Carta %d venceu\n", vencedorPopulacao ? 1 : 2);
    printf("Area:                   Carta %d venceu\n", vencedorArea ? 1 : 2);
    printf("PIB:                    Carta %d venceu\n", vencedorPib ? 1 : 2);
    printf("Pontos Turisticos:      Carta %d venceu\n", vencedorPontos ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", vencedorDensidade ? 1 : 2);
    printf("PIB per Capita:         Carta %d venceu\n", vencedorPIBperCapita ? 1 : 2);
    printf("SUPER PODER:            Carta %d venceu\n", vencedorSuperPoder ? 1 : 2);
    printf("======================================\n");

    return 0;
}