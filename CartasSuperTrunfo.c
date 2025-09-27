#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

    /* ===== Carta 1 (exemplo do enunciado) ===== */
    char estado1 = 'A';
    char codigo1[] = "A01";
    char cidade1[] = "São Paulo";
    long long populacao1 = 12325000LL;
    double area1 = 1521.11;     // km2
    double pib1 = 699.28;       // bilhões de reais
    int pontosTuristicos1 = 50;

    /* Cálculos Carta 1 */
    double densidade1 = (double)populacao1 / area1;                 // hab/km2
    double pibPerCapita1 = (pib1 * 1e9) / (double)populacao1;       // reais

    /* ===== Carta 2 (exemplo do enunciado) ===== */
    char estado2 = 'B';
    char codigo2[] = "B02";
    char cidade2[] = "Rio de Janeiro";
    long long populacao2 = 6748000LL;
    double area2 = 1200.25;     // km2
    double pib2 = 300.50;       // bilhões de reais
    int pontosTuristicos2 = 30;

    /* Cálculos Carta 2 */
    double densidade2 = (double)populacao2 / area2;                 // hab/km2
    double pibPerCapita2 = (pib2 * 1e9) / (double)populacao2;       // reais

    /* ===== Exibição ===== */
    printf("\n================ CARTAS CADASTRADAS ================\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lld\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lld\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    printf("\n====================================================\n\n");

    return 0;
}

