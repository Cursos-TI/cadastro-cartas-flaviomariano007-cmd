#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // --- Carta 1 ---

    char estado1, estado2[9];

    char codigo1[9];

    char cidade1[50];

    int populacao1;

    float area1;

    float pib1;

    int pontos1;

   
   // Entrada de dados da Carta 1
    
    printf("= Cadastro da Carta 1 =\n");

    printf("Digite o estado : \n");
    scanf(" %c", &estado1);// Área para definição das variáveis para armazenar as propriedades das cidades
    
    printf("Digite o codigo da carta1: \n");
    scanf("%s", codigo1);

    printf("digite o nome da cidade1: \n");
    scanf(" %[^\n]", cidade1);

    printf("digite a população da cidade1: \n");
    scanf("%d", &populacao1);

    printf("digite a area (em km²) da cidade1: %.2f\n");
    scanf("%f", &area1);

    printf("digite o pib da cidade1: %.2f\n");
    scanf("%f", &pib1);

    printf("digite o número de pontos turísticos da cidade1: \n");
    scanf("%d", &pontos1);


   
    printf("Cadastro da carta 1 realizado \n"); 

    
    // --- Carta 2 ---
  
    
   
   


    char codigo2[9];

    char cidade2[50];

    int populacao2;

    float area2;

    float pib2;

    int pontos2;
    
    

    // Entrada de dados da Carta 2
    
   
    printf("\n= Cadastro da Carta 2 =\n");

    printf("Digite o estado2: \n");
    scanf(" %c", estado2);
    
    printf("Digite o codigo da carta2: \n");
    scanf("%s", codigo2);

    printf("digite o nome da cidade2: \n");
    scanf(" %[^\n]", cidade2);

    printf("digite a população da cidade2: \n");
    scanf("%d", &populacao2);

    printf("digite a area (em km²) da cidade2: %.2f\n");
    scanf("%f", &area2);

    printf("digite o pib da cidade2: %.2f\n");
    scanf("%f", &pib2);

    printf("digite o número de pontos turísticos da cidade2: \n");
    scanf("%d", &pontos2);

   
    printf("CADASTRO DA CARTA 2 REALIZADO!\n");



  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
