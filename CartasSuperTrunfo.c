#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1 [51], cidade2 [51];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;

    // Em algumas linhas do código, não são executadas no terminal. Meu programa uma, as vezes, dois comandos,
    // seguindo normalmente para o próximo. Tentei consertar, mas quando conseguia executar uma linha, outra não funcionava.
    // Não entendi o que fiz de errado, e não soube resolver.

    // Cadastro da carta 1
    printf("--Cadastro da Carta 1--'\n");

    printf("Escolha um estado de A a H: \n");
    scanf(" %c", &estado1);

    printf("Digite a letra do estado seguida de um código, de 01 a 04: \n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade, em km²: \n");
    scanf("%f ", &area1);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f ", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");  // Essa linha aparece no terminal, mas não dá pra inserir dados
    scanf("%d ", &turistico1);

    printf("Carta 1 Cadastrada!\n");
    printf(" \n");

    // Cadastro da carta 2
    printf("--Cadastro da Carta 2--\n");

    printf("Escolha outro estado de A a H: \n");  // Essa também
    scanf("%c ", &estado2);

    printf("Digite a letra do estado seguida de um código, de 01 a 04 (ex: A01): \n");  // Essa também
    scanf(" %s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s ", &cidade2);

    // A partir daqui, quando tentei ajeitar, nada mais funcionou direito

    printf("Digite o número de habitantes da cidade: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade, em km²: \n");
    scanf("%f ", &area2);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f ", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf(" %d", &turistico2);

    printf("Carta 2 Cadastrada!\n");
    printf(" \n");

    // Exibição dos dados das cartas
    printf("Dados das Cartas 1 e 2:\n");
    printf("Carta 1:\n");

    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turísticos: %d\n", turistico1);

    printf(" \n");
    printf("Carta 2:\n");

    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turísticos: %d", turistico2);

    return 0;
}