#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

    system("chcp 65001");
    system("cls");

   // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char cidade1[40], cidade2[40];
    char codigo1[10], codigo2[10];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

  // Área para entrada de dados

    printf("\n_____VAMOS PREENCHER OS DADOS DA CARTA 01_____\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf(" %c", &estado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", codigo1);

    while (getchar() != '\n');
    printf("Digite o nome da cidade:\n");
    fgets(cidade1, 40, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &pontosturisticos1);


    printf("\n_____VAMOS PREENCHER OS DADOS DA CARTA 02_____\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf(" %c", &estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", codigo2);

    while (getchar() != '\n');
    printf("Digite o nome da cidade:\n");
    fgets(cidade2, 40, stdin);  
    cidade2[strcspn(cidade2, "\n")] = 0;  

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &pontosturisticos2);

  // Área para exibição dos dados da cidade

    printf("\n___VAMOS EXIBIR AS CARTAS___\n"); // Exibindo as cartas

    printf("\nCarta 01: \n");

    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de pontos turísticos: %d \n", pontosturisticos1);

    // vamos exibir a carta 2

    printf("\nCarta 02: \n");

    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d \n", pontosturisticos2);

    return 0;
} 
