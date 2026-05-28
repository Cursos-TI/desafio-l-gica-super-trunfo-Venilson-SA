#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    
    // --- DECLARAÇÃO DE VARIÁVEIS DA CARTA 1 ---
    char estado1[3], codigo1[10], nome1[50];
    int populacao1, pontos1;
    float area1, pib1, densidade1, pib_per_capita1;

    // --- DECLARAÇÃO DE VARIÁVEIS DA CARTA 2 ---
    char estado2[3], codigo2[10], nome2[50];
    int populacao2, pontos2;
    float area2, pib2, densidade2, pib_per_capita2;

    // --- CADASTRO DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (Ex: RJ): ");
    scanf("%s", estado1);
    printf("Código da Carta (Ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1); // O espaço antes de % lê nomes compostos como "São Paulo"
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Cálculos da Carta 1
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / (float)populacao1;

    printf("\n--- Cadastro da Carta 2 ---\n");

    // --- CADASTRO DA CARTA 2 ---
    printf("Estado (Ex: SP): ");
    scanf("%s", estado2);
    printf("Código da Carta (Ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos da Carta 2
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / (float)populacao2;

    // --- LÓGICA DE COMPARAÇÃO, a escolha do atributo é feita direto no código.
    
    printf("\n============================================\n");
    printf("CONFRONTO: %s vs %s\n", nome1, nome2);
    printf("Atributo Comparado: População\n");
    printf("============================================\n");

    printf("Carta 1 - %s (%s): %d\n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", nome2, estado2, populacao2);
    printf("--------------------------------------------\n");

    // Decidindo o vencedor com if-else
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) VENCEU!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) VENCEU!\n", nome2);
    } else {
        printf("Resultado: EMPATE!\n");
    }
    printf("============================================\n");


    return 0;
}