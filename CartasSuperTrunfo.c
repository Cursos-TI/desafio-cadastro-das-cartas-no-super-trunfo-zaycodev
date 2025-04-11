#include <stdio.h>
   
    int main (){
         printf("Desafio Super Trunfo - Nível Aventureiro\n");

    // Váriáveis para carta 1

       char estado1;
       char codigo1 [5];
       char nomeCidade1 [50];
       int populacao1;
       float area1, PIB1, denspop1, PIBpc1;
       int pontosturisticos1;

       // Váriáveis para carta 2

       char estado2;
       char codigo2 [5];
       char nomeCidade2 [50];
       int populacao2;
       float area2, PIB2, denspop2, PIBpc2;
       int pontosturisticos2;

       // Leitura de dados da carta 1

        printf("Digite os dados da carta 1: \n");

        printf("Estado (A-H): ");
        scanf("%c", &estado1);
        
        printf("Código (ex:A01): ");
        scanf("%s", &codigo1);

        printf("Nome da cidade: ");
        scanf(" %[^\n]", nomeCidade1);

        printf("População: ");
        scanf("%d", &populacao1);

        printf("Área (km²): ");
        scanf("%f", &area1);

        printf("PIB: ");
        scanf("%f", &PIB1);

        printf("Pontos Turisticos: ");
        scanf("%d", &pontosturisticos1);


        // Leitura dos dados da carta 2

        printf("Digite os dados da carta 2: ""\n");

        printf("Estado (A-H): ");
        scanf(" %c", &estado2);
        
        printf("Código (ex:A01): ");
        scanf("%s", &codigo2);

        printf("Nome da cidade: ");
        scanf(" %[^\n]", nomeCidade2);

        printf("População: ");
        scanf("%d", &populacao2);

        printf("Área (km²): ");
        scanf("%f", &area2);

        printf("PIB: ");
        scanf("%f", &PIB2);

        printf("Pontos Turisticos: ");
        scanf("%d", &pontosturisticos2);


                                   //Impressão dos dados da carta 1

                                   printf("\nDados da carta 1:\n");

                                   printf("\nCarta 1:\n");
                                   printf("Estado: %c\n", estado1);
                                   printf("Código da carta: %s\n", codigo1);
                                   printf("Nome da cidade: %s\n", nomeCidade1);
                                   printf("População: %d\n", populacao1);
                                   printf("Area: %.2f km²\n", area1);
                                   printf("PIB: %.2f bilhões de reais\n", PIB1);
                                   printf("Pontos Turísticos: %d\n", pontosturisticos1);

                                   denspop1 = populacao1 / area1; // calculo da densidade populacional da carta 1
                                   PIBpc1 = (PIB1 * 1000000000.0f) / populacao1; // calculo do PIB per capita da carta 1

                                   printf("Densidade Populacional: %.2f hab/km²\n", denspop1);
                                   printf("PIB per Capita: %.2f reais\n", PIBpc1);

                                   //Impressão dos dados da carta 2

                                   printf("\nDados da carta 2:\n");

                                   printf("\nCarta 2:\n");
                                   printf("Estado: %c\n", estado2);
                                   printf("Código da carta: %s\n", codigo2);
                                   printf("Nome da cidade: %s\n", nomeCidade2);
                                   printf("População: %d\n", populacao2);
                                   printf("Area: %.2f km²\n", area2);
                                   printf("PIB: %.2f bilhões de reais\n", PIB2);
                                   printf("Pontos Turísticos: %d\n", pontosturisticos2);

                                   denspop2 = populacao2 / area2; // Calculo da densidade populacional da carta 2
                                   PIBpc2 = (PIB2 * 1000000000.0f) / populacao2; // calculo do PIB per capita da carta 2

                                   printf("Densidade Populacional: %.2f hab/km²\n", denspop2);
                                   printf("PIB per Capita: %.2f reais\n", PIBpc2);






                                   return 0;
                                   











        





        
                                              
    










       























    }