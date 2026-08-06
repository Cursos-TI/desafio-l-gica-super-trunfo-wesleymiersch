#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    int carta1, carta2, cartavencedora, escolhajogador1, escolhajogador2, resultadocarta1=0, resultadocarta2=0;
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
    printf("Escolha O  Primeiro Atributo que deseja comparar:\n");
    printf("1 - Populacao \n");
    printf("2 - Area \n");
    printf("3 - PIB \n");
    printf("4 - Numero de Pontos Turisticos \n");
    printf("5 - Densidade \n");
    scanf("%d", &escolhajogador1);

    switch (escolhajogador1) {
        case 1:
            if (populacao1 > populacao2) {
              resultadocarta1++;
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("carta 01 ganhou um ponto populacao carta 01: %lf, Populacao carta2: %lf \n", populacao1, populacao2);
            } else if (populacao1 < populacao2) {
                resultadocarta2++;
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("carta 02 ganhou um ponto populacao carta 01: %lf, Populacao carta1: %lf \n", populacao2, populacao1);
            } else {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("As cartas empataram!\n");
            }
            break;
        case 2:
            if (area1 > area2) {
                resultadocarta1++;
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("carta 01 ganhou um ponto Area carta 01: %lf, Area carta2: %lf \n", area1, area2);
            } else if (area1 < area2) {
                resultadocarta2++;
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("carta 02 ganhou um ponto Area carta 02: %lf, Area carta1: %lf \n", area2, area1);
            } else {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("As cartas empataram!\n");
            }
            break;
        case 3:
             if (pib1> pib2) {
                resultadocarta1++;
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("carta 01 ganhou um ponto PIB carta 01: %f, PIB carta2: %f \n", pib1, pib2);
            } else if (pib1 < pib2) {
                resultadocarta2++;
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("carta 02 ganhou um ponto Area carta 02: %f, Area carta1: %f \n", pib2, pib1);
            } else {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("As cartas empataram!\n");
            }
            break;
        case 4:
            if (turistico1 > turistico2) {
                resultadocarta1++;
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("carta 01 ganhou um ponto Pontos Turisticos carta 01: %lf, Pontos Turisticos carta2: %lf \n", turistico1, turistico2);
            } else if (turistico1 < turistico2) {
                resultadocarta2++;
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("carta 02 ganhou um ponto  Pontos Turisticos carta 02: %lf, Pontos Turisticos carta1: %lf \n", turistico2, turistico1);
            } else {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("As cartas empataram!\n");
            }
            break;
        case 5:
            if (densidade1 < densidade2) {
                resultadocarta1++;
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("carta 01 ganhou um ponto DENSIDADE carta 01: %lf, DENSIDADE carta2: %lf \n", densidade1, densidade2);
            } else if (densidade1 > densidade2) {
                resultadocarta2++;
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("carta 02 ganhou um ponto DENSIDADE carta 02: %lf, DENSIDADE carta1: %lf \n", densidade2, densidade1);
            } else {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("As cartas empataram!\n");
            }
            break;
        default:
            printf("Escolha um atributo válido para comparar as cartas\n");
            break;
    }




    // Escolha qual atributo será comparado pelo jogador
    printf("############ ###########\n");
    printf("Escolha O  Segundo Atributo que deseja comparar:\n");
    printf("1 - Populacao \n");
    printf("2 - Area \n");
    printf("3 - PIB \n");
    printf("4 - Numero de Pontos Turisticos \n");
    printf("5 - Densidade \n");
    scanf("%d", &escolhajogador2);

    switch (escolhajogador2) {
        case 1:
            if (populacao1 > populacao2) {
                resultadocarta1++;
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("carta 01 ganhou um ponto populacao carta 01: %lf, Populacao carta2: %lf \n", populacao1, populacao2);
            } else if (populacao1 < populacao2) {
                resultadocarta2++;
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("carta 02 ganhou um ponto populacao carta 02: %lf, Populacao carta1: %lf \n", populacao2, populacao1);
            } else {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("As cartas empataram!\n");
            }
            break;
        case 2:
            if (area1 > area2) {
                resultadocarta1++;
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("carta 01 ganhou um ponto Area carta 01: %lf, Area carta2: %lf \n", area1, area2);
            } else if (area1 < area2) {
                resultadocarta2++;
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("carta 02 ganhou um ponto Area carta 02: %lf, Area carta1: %lf \n", area2, area1);
            } else {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("As cartas empataram!\n");
            }
            break;
        case 3:
            if (pib1 > pib2) {
                resultadocarta1++;
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("carta 01 ganhou um ponto PIB carta 01: %f, PIB carta2: %f \n", pib1, pib2);
            } else if (pib1 < pib2) {
                resultadocarta2++;
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("carta 02 ganhou um ponto PIB carta 02: %f, PIB carta1: %f \n", pib2, pib1);
            } else {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("As cartas empataram!\n");
            }
            break;
        case 4:
            if (turistico1 > turistico2) {
                resultadocarta1++;
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("carta 01 ganhou um ponto Pontos Turisticos carta 01: %lf, Pontos Turisticos carta2: %lf \n", turistico1, turistico2);
            } else if (turistico1 < turistico2) {
                resultadocarta2++;
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("carta 02 ganhou um ponto Pontos Turisticos carta 02: %lf, Pontos Turisticos carta1: %lf \n", turistico2, turistico1);
            } else {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("As cartas empataram!\n");
            }
            break;
        case 5:
            if (densidade1 > densidade2) {
                resultadocarta2++;
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("carta 02 ganhou um ponto DENSIDADE carta 02: %lf, DENSIDADE carta1: %lf \n", densidade2, densidade1);
            } else if (densidade1 < densidade2) {
                resultadocarta1++;
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("carta 01 ganhou um ponto DENSIDADE carta 01: %lf, DENSIDADE carta2: %lf \n", densidade1, densidade2);
            } else {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("As cartas empataram!\n");
            }
            break;
        default:
            printf("Escolha um atributo válido para comparar as cartas\n");
            break;
    }







    if (resultadocarta1 > resultadocarta2) {
         printf(" ##### RESULTADO DA PARTIDA #####\n");
        printf (" A carta 01 venceu com uma pontuacao de: %d", resultadocarta1);
        printf ("A carta 02 Perdeu com uma pontuacao de %d", resultadocarta2);
    } else if (resultadocarta1 < resultadocarta2) {
        printf(" ##### RESULTADO DA PARTIDA #####\n");
        printf (" A carta 02 ganhou com uma pontuacao de %d", resultadocarta2);
        printf ("A carta 01 Perdeu com uma pontuacao de %d", resultadocarta1);
    } else {
                printf(" ##### RESULTADO DA PARTIDA #####\n");
                printf("As cartas empataram!\n");
                printf (" Pontuacao carta 01: %d", resultadocarta1);
                printf (" Pontuacao carta 02: %d", resultadocarta2);
            }
    return 0;
}
