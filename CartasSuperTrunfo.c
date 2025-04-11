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
    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float capita1, capita2;
    float superpoder1, superpoder2;
    int resArea, resPopulacao, resPib, resPontos, resDensidade, resCapita, resSuperpoder;
    
    //obtenção dos dados via teclado
    printf("Digite a sigla do primeiro Estado: \n");
    scanf("%s", &estado1);
    printf("Digite o código do primeiro estado com 1 letra e 2 números: \n");
    scanf("%s", codigo1);
    printf("Digite o nome da primeira cidade: \n");
    scanf("%s", nome1);
    printf("Digite a população da primeira cidade: \n");
    scanf("%u", &populacao1);
    printf("Digite a área da primeira cidade em km² com separação decimal utilizando ponto (ex: 300.54): \n");
    scanf("%f", &area1);
    printf("Digite o pib da primeira cidade em bilhões de reais com separação decimal utilizando ponto (ex: 8.3): \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos da primeira cidade: \n");
    scanf("%d", &pontos1);

    printf("\n"); //quebra de linha para melhor visualização

    printf("Digite a sigla do segundo Estado: \n");
    scanf("%s", &estado2);
    printf("Digite o código do segundo estado com 1 letra e 2 números: \n");
    scanf("%s", codigo2);
    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", nome2);
    printf("Digite a população da segunda cidade: \n");
    scanf("%u", &populacao2);
    printf("Digite a área da segunda cidade em km² com separação decimal utilizando ponto (ex: 300.54): \n");
    scanf("%f", &area2);
    printf("Digite o pib da segunda cidade em bilhões de reais com separação decimal utilizando ponto (ex: 8.3): \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos da segunda cidade: \n");
    scanf("%d", &pontos2);

    //Cálculo de atributos que dependem de outros
    densidade1 = populacao1 / area1;
    capita1 = pib1 * 1000000000 / populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + pontos1 + (1 / densidade1) + capita1;
    densidade2 = populacao2 / area2;
    capita2 = pib2 * 1000000000 / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + pontos2 + (1 / densidade2) + capita2;

    //apresentação da carta
    printf("\n"); //quebra de linha para melhor visualização
    printf("Carta1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Pib Per Capita: %.2f reais\n", capita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n"); //quebra de linha para melhor visualização
    
    printf("Carta2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Pib Per Capita: %.2f reais\n", capita2);
    printf("Super Poder: %.2f\n", superpoder2);

    //Comparação das cartas;
    resPopulacao = populacao1 > populacao2;
    resArea = area1 > area2;
    resPib = pib1 > pib2;
    resPontos = pontos1 > pontos2;
    resDensidade = densidade1 < densidade2;
    resCapita = capita1 > capita2;
    resSuperpoder = superpoder1 > superpoder2;

    //Apresentação dos resultados;
    printf("\n"); //quebra de linha para melhor visualização
    printf("Comparação das cartas: se o resultado for (1), a carta 1 ganhou, se o resultado for (0), a carta 2 ganhou:\n");
    printf("População: %d\n", resPopulacao);
    printf("Área: %d\n", resArea);
    printf("PIB: %d\n", resPib);
    printf("Número de Pontos Turísticos: %d\n", resPontos);
    printf("Densidade Populacional: %d\n", resDensidade);
    printf("Pib Per Capita: %d\n", resCapita);
    printf("Super Poder: %d\n", resSuperpoder);

    return 0;
}

