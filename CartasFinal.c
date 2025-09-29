#include <stdio.h>

 
             // Desafio Super Trunfo
         // Tema 1 2 e 3 - Batalha de Cartas Super Trunfo

        int main(){

            char Estado1,Estado2;
            char Codigo1[20],Codigo2[20];
            char Cidade1[50],Cidade2[50];
            int Populacao1 ,Populacao2 ;
            float Area1,Area2;
            float PIB1,PIB2;
            int turistico1,turistico2;




              printf("-----Cadrasto Carta 1:----- \n \n");
                
            printf("Escolha uma letra entre A a G: \n");
             scanf(" %c", &Estado1);
  
             printf("Código da Carta: (ex: A01,A02 )\n");
             scanf("%s", Codigo1);
              
             printf("Digite a Cidade:\n");
             scanf(" %[^\n]", Cidade1);
            

             printf("Quantidade da População: \n");
             scanf("%d", &Populacao1);
            

             printf("Área em km²: \n");
             scanf("%f", &Area1);
            

             printf("PIB da Cidade: \n");
             scanf("%f", &PIB1);
            


             printf("Pontos Turísticos: \n");
             scanf("%d", &turistico1);
              
              
             printf("-----Cadrasto Carta 2:----- \n \n");


             printf("Escolha uma letra entre A a G: \n");
             scanf(" %c", &Estado2);
            
            
             printf("Código da Carta: (ex: A01,A02 )\n");
             scanf("%s", Codigo2);
            

             printf("Digite a Cidade:\n");
             scanf(" %[^\n]", Cidade2);
            
             
             printf("Quantidade da População: \n");
             scanf("%d", &Populacao2);
            
               
             printf("Área em km²: \n");
             scanf("%f", &Area2);
              

            

             printf("PIB da Cidade: \n");
             scanf("%f", &PIB2);
            

            

             printf("Pontos Turísticos: \n");
             scanf("%d", &turistico2);



                  printf("----CADRASTO COMPLETO DO CARTÃO 1---- \n");

                printf("Letra: %c \n", Estado1);
                printf("Codigo da carta: %s \n", Codigo1);
                printf("Cidade: %s \n", Cidade1);
                printf("População: %d de habitantes \n", Populacao1);
                printf("Área em km²: %.2f km²\n", Area1);
                printf("PIB da Cidade: %.2f Bilhões de Reais \n",PIB1);
                printf("Total de Pontos Turísticos: %d \n ",turistico1);
               
                
                printf("----CADRASTO COMPLETO DO CARTÃO 2---- \n");

                printf("Letra: %c \n", Estado2);
                printf("Codigo da carta: %s \n", Codigo2);
                printf("Cidade: %s \n", Cidade2);
                printf("População: %d  de habitantes \n", Populacao2);
                printf("Área em km²: %.2f km²\n", Area2);
                printf("PIB da Cidade: %.2f Bilhões de Reais \n",PIB2);
                printf("Total de Pontos Turísticos: %d \n ",turistico2);


                



                



                return 0;
        }