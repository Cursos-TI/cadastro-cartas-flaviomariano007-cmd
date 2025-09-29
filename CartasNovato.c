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


    // Saída de dados carta 01
    printf ("\n Carta 1: \n");
    printf ("Estado: %s \n", estado1 );
    printf ("Codigo: %s \n", codigo1);
    printf ("Cidade: %s \n", cidade1);
    printf ("Populacao: %f \n", populacao1);
    printf ("Area: %.2f km²\n", area1);
    printf ("PIB: %.2f \n", PIB1);
    printf ("Numeros de pontos turisticos: %i \n", pontost1);

  
   
    printf("Cadastro da carta 1 realizado \n"); 

    
    
    
    
    
    
    // --- Carta 2 ---
  
    
   
   


    char codigo2[9];

    char cidade2[50];

    int populacao2;

    float area2;

    float pib2;

    int pontos2;
    
    float densidadep;
     
    float PIBpercapita;
    
    float InversoDensidade2

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

    DensidadePopulacional2 = (double) Populacao2 / Area2;
    InversoDensidade2 = Area2 / (float)Populacao2;
   
   
    printf("digite o número de pontos turísticos da cidade2: \n");
    scanf("%d", &pontos2);

   
    printf("CADASTRO DA CARTA 2 REALIZADO!\n");


    // Saída de dados carta 02
    printf ("\n Carta 02:\n");
    printf ("Estado: %s \n", estado2);
    printf ("Codigo carta: %s \n", codigo2);
    printf ("Cidade: %s \n", cidade2);
    printf ("Populacao: %f \n",populacao2);
    printf ("Area: %.2f km²\n", area2);
    printf ("PIB: %.2f \n", PIB2);
    printf ("Numeros de pontos turisticos: %i \n", pontost2);
    printf ("Densidade populacional: %.2f \n", populacao2 / area2);
    printf ("PIBpercapita: %.2 \n", PIB2 / populacao2);



   //realizado cadastro das cartas nivel novato e aventureiro

return 0;
} 
