#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //declaração de variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float capita1, capita2;

    
    //obtenção dos dados via teclado
    printf("Digite a sigla do primeiro Estado: \n");
    scanf(" %c", &estado1);
    printf("Digite o código do primeiro estado com 1 letra e 2 números: \n");
    scanf("%s", &codigo1);
    printf("Digite o nome da primeira cidade: \n");
    scanf("%s", &nome1);
    printf("Digite a população da primeira cidade: \n");
    scanf("%d", &populacao1);
    printf("Digite a área da primeira cidade em km² com separação decimal utilizando ponto (ex: 300.54): \n");
    scanf("%f", &area1);
    printf("Digite o pib da primeira cidade em bilhões de reais com separação decimal utilizando ponto (ex: 8.3): \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos da primeira cidade: \n");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    capita1 = pib1 * 1000000000 / populacao1;

    printf("Digite a sigla do segundo Estado: \n");
    scanf(" %c", &estado2);
    printf("Digite o código do segundo estado com 1 letra e 2 números: \n");
    scanf("%s", &codigo2);
    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", &nome2);
    printf("Digite a população da segunda cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a área da segunda cidade em km² com separação decimal utilizando ponto (ex: 300.54): \n");
    scanf("%f", &area2);
    printf("Digite o pib da segunda cidade em bilhões de reais com separação decimal utilizando ponto (ex: 8.3): \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos da segunda cidade: \n");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    capita2 = pib2 * 1000000000 / populacao2;

    //apresentação da carta
    printf("Carta1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Pib Per Capita: %.2f reais\n", capita1);

    printf("\n");
    
    printf("Carta2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Pib Per Capita: %.2f reais\n", capita2);

    return 0;
}

