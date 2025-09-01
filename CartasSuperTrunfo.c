#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    char estado1, estado2;
    char codigo1 [4], codigo2 [4];
    char cidade1 [51], cidade2 [51];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2 ;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    printf("-- CADASTRO DA CARTA 1 --\n");

    printf("Escolha um estado de A a H: ");
    scanf("%c", &estado1);

    printf("Digite o estado seguido de um código (ex: A1): ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o número da população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade, em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");
    printf("-- CADASTRO DA CARTA 2 --\n");

    printf("Escolha um estado de A a H: ");
    scanf(" %c", &estado2);

    printf("Digite o estado seguido de um código (ex: A1): ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o número da população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade, em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
    printf("\n");
    printf("-- DADOS DAS CARTAS --\n");

    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = pib1 / (float) populacao1;
    superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %f hab/km²\n", densidadePopulacional1);
    printf("PIB per capita: %f reais\n", pibPerCapita1);

    printf("\n");

    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / (float) populacao2;
    superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita: %f reais\n", pibPerCapita2);

    printf("\n");
    printf("-- COMPARAÇÃO DAS CARTAS --\n");
    printf("(1 = venceu     0 = perdeu)\n");
    printf("\n");

    printf("- Maior População - \n");
    printf("Carta 1 (%d)\n", populacao1 > populacao2);
    printf("Carta 2 (%d)\n", populacao2 > populacao1);
    printf("\n"); 

    printf("- Maior Área - \n");
    printf("Carta 1 (%d)\n", area1 > area2);
    printf("Carta 2 (%d)\n", area2 > area1);
    printf("\n"); 

    printf("- Maior PIB - \n");
    printf("Carta 1 (%d)\n", pib1 > pib2);
    printf("Carta 2 (%d)\n", pib2 > pib1);
    printf("\n"); 

    printf("- Maior Número de Pontos Turísticos - \n");
    printf("Carta 1 (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Carta 2 (%d)\n", pontosTuristicos2 > pontosTuristicos1);
    printf("\n");

    printf("- Menor Densidade Populacional - \n");
    printf("Carta 1 (%d)\n", densidadePopulacional1 < densidadePopulacional2);
    printf("Carta 2 (%d)\n", densidadePopulacional2 < densidadePopulacional1);
    printf("\n");

    printf("- Maior Pib per Capita - \n");
    printf("Carta 1 (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Carta 2 (%d)\n", pibPerCapita2 > pibPerCapita1);
    printf("\n");

    printf("- Maior Super Poder - \n");
    printf("Carta 1 (%d)\n", superPoder1 > superPoder2);
    printf("Carta 2 (%d)\n", superPoder2 > superPoder1);

    return 0;
}
