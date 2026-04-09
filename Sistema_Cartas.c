#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    // Variáveis Carta 1
    char estado, codigo[3], cidade[15];
    int populacao, pontosTuristicos;
    float area, pib_bilhoes, pib, pib_percapita, densidade_populacional; 

    // Variáveis Carta 2
    char estado2, codigo2[3], cidade2[15];
    int populacao2, pontosTuristicos2;
    float area2, pib_bilhoes2, pib2, pib_percapita2, densidade_populacional2; 

    // Entrada de dados - Carta 1
    printf("Preencha os dados da primeira carta\n");

    printf("Digite o estado (uma letra): ");
    fflush(stdin);
    scanf(" %c", &estado);

    printf("Digite o codigo da carta: ");
    scanf(" %s", codigo);

    printf("Digite a cidade (ate 15 caracteres): ");
    scanf(" %s", cidade);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    printf("Digite a area (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib_bilhoes);

    // Converte o valor digitado em bilhões para reais
    pib = pib_bilhoes * 1000000000;

    // Entrada de dados - Carta 2
    printf("\nPreencha os dados da segunda carta\n");

    printf("Digite o estado (uma letra): ");
    fflush(stdin);
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: ");
    scanf(" %s", codigo2);

    printf("Digite a cidade (ate 15 caracteres): ");
    scanf(" %s", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("Digite a area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib_bilhoes2);

    // Converte o valor digitado em bilhões para reais
    pib2 = pib_bilhoes2 * 1000000000;

    // Cálculos
    densidade_populacional = (float) populacao / area;
    pib_percapita = pib / (float) populacao;

    densidade_populacional2 = (float) populacao2 / area2;
    pib_percapita2 = pib2 / (float) populacao2;

  // Área para entrada de dados
    // Saída de dados
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib / 1000000000); // <-- exibindo em bilhões
    printf("Pontos Turisticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_percapita);

  // Área para exibição dos dados da cidade
    printf("\n===== Carta 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2 / 1000000000); // <-- exibindo em bilhões
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_percapita2);

return 0;
} 
