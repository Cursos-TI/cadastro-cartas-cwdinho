#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Mestre - Batalha de Cartas

int main() {

  // ================= VARIÁVEIS =================

  // Carta 1
  char estado1;
  char codigo1[10];
  char cidade1[50];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontos1;
  float densidade1;
  float pibPerCapita1;
  float superPoder1;

  // Carta 2
  char estado2;
  char codigo2[10];
  char cidade2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontos2;
  float densidade2;
  float pibPerCapita2;
  float superPoder2;


  // ================= ENTRADA =================

  printf("=== CARTA 1 ===\n");

  printf("Estado: ");
  scanf(" %c", &estado1);

  printf("Codigo: ");
  scanf("%s", codigo1);

  printf("Cidade: ");
  scanf("%s", cidade1);

  printf("Populacao: ");
  scanf("%lu", &populacao1);

  printf("Area: ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Pontos Turisticos: ");
  scanf("%d", &pontos1);


  printf("\n=== CARTA 2 ===\n");

  printf("Estado: ");
  scanf(" %c", &estado2);

  printf("Codigo: ");
  scanf("%s", codigo2);

  printf("Cidade: ");
  scanf("%s", cidade2);

  printf("Populacao: ");
  scanf("%lu", &populacao2);

  printf("Area: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Pontos Turisticos: ");
  scanf("%d", &pontos2);


  // ================= CÁLCULOS =================

  // Carta 1
  densidade1 = populacao1 / area1;
  pibPerCapita1 = pib1 / populacao1;
  superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1.0 / densidade1);

  // Carta 2
  densidade2 = populacao2 / area2;
  pibPerCapita2 = pib2 / populacao2;
  superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1.0 / densidade2);


  // ================= EXIBIÇÃO DOS DADOS =================

  printf("\n--- CARTA 1 ---\n");
  printf("Densidade: %.2f\n", densidade1);
  printf("PIB per Capita: %.2f\n", pibPerCapita1);
  printf("Super Poder: %.2f\n", superPoder1);

  printf("\n--- CARTA 2 ---\n");
  printf("Densidade: %.2f\n", densidade2);
  printf("PIB per Capita: %.2f\n", pibPerCapita2);
  printf("Super Poder: %.2f\n", superPoder2);


  // ================= COMPARAÇÕES =================

  printf("\n=== COMPARACAO DE CARTAS ===\n");

  printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
  printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
  printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
  printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);

  // Regra especial: menor densidade vence
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

  printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
  printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

  return 0;
}