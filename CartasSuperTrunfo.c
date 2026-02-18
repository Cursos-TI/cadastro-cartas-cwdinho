#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Carta 1
  char estado1;
  char codigo1[10];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;

  // Carta 2
  char estado2;
  char codigo2[10];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;


  // Área para entrada de dados

  printf("=== CARTA 1 ===\n");

  printf("Estado (A a H): ");
  scanf(" %c", &estado1);

  printf("Codigo da carta: ");
  scanf("%s", codigo1);

  printf("Nome da cidade: ");
  scanf("%s", cidade1);

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area (km2): ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Numero de pontos turisticos: ");
  scanf("%d", &pontos1);


  printf("\n=== CARTA 2 ===\n");

  printf("Estado (A a H): ");
  scanf(" %c", &estado2);

  printf("Codigo da carta: ");
  scanf("%s", codigo2);

  printf("Nome da cidade: ");
  scanf("%s", cidade2);

  printf("Populacao: ");
  scanf("%d", &populacao2);

  printf("Area (km2): ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Numero de pontos turisticos: ");
  scanf("%d", &pontos2);


  // Área para exibição dos dados da cidade

  printf("\n--- DADOS CADASTRADOS ---\n");

  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos Turisticos: %d\n", pontos1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turisticos: %d\n", pontos2);

  return 0;
}
