#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo - Nível Mestre\n");

                // Variáveis para carta 1
                
    char estado1;
    char codigo1[5];
    char nomeCidade1[50];
    float area1, PIB1, denspop1, PIBpc1, superPoder1, inverso_dens1;
    int pontosturisticos1;
    unsigned long int populacao1;

                // Variáveis para carta 2

    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    int pontosturisticos2;
    unsigned long int populacao2;
    float area2, PIB2, denspop2, PIBpc2, superPoder2, inverso_dens2;

                // Leitura de dados da carta 1

    printf("\nDigite os dados da carta 1: \n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex:A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &PIB1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);

                // Leitura de dados da carta 2

    printf("\nDigite os dados da carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex:A01): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &PIB2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

                // Cálculos da carta 1
    denspop1 = populacao1 / area1;
    inverso_dens1 = 1 / denspop1;
    PIBpc1 = (PIB1 * 1000000000.0f) / populacao1;
    superPoder1 = populacao1 + area1 + PIB1 + PIBpc1 + pontosturisticos1 + inverso_dens1;

                // Cálculos da carta 2
    denspop2 = populacao2 / area2;
    inverso_dens2 = 1 / denspop2;
    PIBpc2 = (PIB2 * 1000000000.0f) / populacao2;
    superPoder2 = populacao2 + area2 + PIB2 + PIBpc2 + pontosturisticos2 + inverso_dens2;

                 // Impressão dos dados
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", denspop1);
    printf("PIB per Capita: %.2f reais\n", PIBpc1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", denspop2);
    printf("PIB per Capita: %.2f reais\n", PIBpc2);
    printf("Super Poder: %.2f\n", superPoder2);

                // Comparações - usando apenas operadores relacionais
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu? (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu? (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu? (%d)\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu? (%d)\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional: Carta 1 venceu? (%d)\n", denspop1 < denspop2); // menor vence
    printf("PIB per Capita: Carta 1 venceu? (%d)\n", PIBpc1 > PIBpc2);
    printf("Super Poder: Carta 1 venceu? (%d)\n", superPoder1 > superPoder2);

    return 0;
}
