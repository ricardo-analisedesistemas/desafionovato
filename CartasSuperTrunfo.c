#include <stdio.h>
//#include <string.h>

int main() {
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4]; // 3 caracteres + terminador nulo
    char cidade1[50];
    int populacao1;
    double area1;
    float pib1;
    int pontos_turisticos1;

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    double area2; ///doble é para numeros com nivel alto de precisaao diveras casa decimais
    float pib2;
    int pontos_turisticos2;

    // Leitura dos dados da primeira carta
    printf("Cadastro da Carta 1:\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Código da Carta (ex: A01): ");
    scanf("%3s", codigo1); // Limita a 3 caracteres para evitar overflow
    
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade1); // Lê até encontrar uma nova linha, limitando a 49 caracteres
    
    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área (em km²): ");
    scanf("%lf",&area1);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f",&pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Limpar o buffer de entrada antes de ler a próxima carta
    while (getchar() != '\n');

    // Leitura dos dados da segunda carta
    printf("\nCadastro da Carta 2:\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Código da Carta (ex: B02): ");
    scanf("%3s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade2);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (em km²): ");
    scanf("%lf", &area2);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição das cartas cadastradas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2lf km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2lf km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}