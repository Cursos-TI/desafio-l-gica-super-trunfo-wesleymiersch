#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    int carta1, carta2, cartavencedora, escolhajogador;
    char estado1[20], cidade1[20], estado2[20], cidade2[20];
    double populacao1, populacao2, turistico1, turistico2;
    double area1, area2, densidade1, densidade2;
    float pib1, pib2;

    printf("Informe o Codigo da carta 1\n");
    scanf("%d", &carta1);
    printf("Informe o Estado da carta 1\n");
    scanf("%19s", estado1);
    printf("Informe a cidade da carta 1\n");
    scanf("%19s", cidade1);
    printf("Informe a populacao da carta 1\n");
    scanf("%lf", &populacao1);
    printf("informe o PIB da carta 1\n");
    scanf("%f", &pib1);
    printf("Informe a area da carta 1\n");
    scanf("%lf", &area1);
    printf("Informe o numero de pontos turisticos da carta 1\n");
    scanf("%lf", &turistico1);
    densidade1 = populacao1 / area1;

    // Entrada de dados da segunda carta
    printf("Informe o Codigo da carta 2\n");
    scanf("%d", &carta2);
    printf("Informe o Estado da carta 2\n");
    scanf("%19s", estado2);
    printf("Informe a cidade da carta 2\n");
    scanf("%19s", cidade2);
    printf("Informe a populacao da carta 2\n");
    scanf("%lf", &populacao2);
    printf("informe o PIB da carta 2\n");
    scanf("%f", &pib2);
    printf("Informe a area da carta 2\n");
    scanf("%lf", &area2);
    printf("Informe o numero de pontos turisticos da carta 2\n");
    scanf("%lf", &turistico2);
    densidade2 = populacao2 / area2;

    // Escolha qual atributo será comparado pelo jogador
    printf("############ Vamos Iniciar O Jogo ###########\n");
    printf("Escolha qual Atributo deseja comparar:\n");
    printf("1 - Populacao \n");
    printf("2 - Area \n");
    printf("3 - PIB \n");
    printf("4 - Numero de Pontos Turisticos \n");
    printf("5 - Densidade \n");
    scanf("%d", &escolhajogador);

    switch (escolhajogador) {
        case 1:
            if (populacao1 > populacao2) {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("A carta vencedora é a carta 1\n");
                printf("A carta 1 venceu pela sua populacao de %f\n", populacao1);
            } else if (populacao1 < populacao2) {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("A carta vencedora é a carta 2\n");
                printf("A carta 2 venceu pela sua populacao de %f\n", populacao2);
            } else {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("As cartas empataram!\n");
            }
            break;
        case 2:
            if (area1 > area2) {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("A carta vencedora é a carta 1\n");
                printf("A carta 1 venceu pela sua area de %f\n", area1);
            } else if (area1 < area2) {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("A carta vencedora é a carta 2\n");
                printf("A carta 2 venceu pela sua area de %f\n", area2);
            } else {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("As cartas empataram!\n");
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("A carta vencedora é a carta 1\n");
                printf("A carta 1 venceu pelo seu pib de %f\n", pib1);
            } else if (pib1 < pib2) {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("A carta vencedora é a carta 2\n");
                printf("A carta 2 venceu pelo seu pib de %f\n", pib2);
            } else {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("As cartas empataram!\n");
            }
            break;
        case 4:
            if (turistico1 > turistico2) {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("A carta vencedora é a carta 1\n");
                printf("A carta 1 venceu pelo seu numero de pontos turisticos de %f\n", turistico1);
            } else if (turistico1 < turistico2) {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("A carta vencedora é a carta 2\n");
                printf("A carta 2 venceu pelo seu numero de pontos turisticos de %f\n", turistico2);
            } else {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("As cartas empataram!\n");
            }
            break;
        case 5:
            if (densidade1 > densidade2) {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("A carta vencedora é a carta 1\n");
                printf("A carta 1 venceu pela sua densidade de %f\n", densidade1);
            } else if (densidade1 < densidade2) {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("A carta vencedora é a carta 2\n");
                printf("A carta 2 venceu pela sua densidade de %f\n", densidade2);
            } else {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("As cartas empataram!\n");
            }
            break;
        default:
            printf("Escolha um atributo válido para comparar as cartas\n");
            break;
    }

    return 0;
}
