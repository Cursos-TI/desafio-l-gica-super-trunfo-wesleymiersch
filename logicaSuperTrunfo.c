#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
int carta1, carta2, cartavencedora;
char estado1[20], cidade1[20];
double populacao1, turistico1;
float pib1, pibvencedor, pibperdedor;
char carta2[20], estado2[20], cidade2[20];
double populacao2, turistico2;
float pib2;
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
printf ("Informe o Codigo da carta 1\n ");
scanf ("%d", &carta1);
printf ("Informe o Estado da carta 1 \n");
scanf ("%s", &estado1);
printf ("Informe a cidade da carta 1 \n");
scanf ("%s", &cidade1);
printf ("Infotme a a população da carta 1\n");
scanf ("%lf", &populacao1);
printf ("informe o PIB da carta 1\n");
scanf ("%f", &pib1);

//Entrada de dados da segunda carta 

printf ("Informe o Codigo da carta 2\n ");
scanf ("%d", &carta2);
printf ("Informe o Estado da carta 2 \n");
scanf ("%s", estado2);
printf ("Informe a cidade da carta 2 \n");
scanf ("%s", cidade2);
printf ("Infotme a a população da carta 2\n");
scanf ("%lf", &populacao2);
printf ("informe o PIB da carta 2\n");
scanf ("%f", &pib2);


// Comparação de cartas

if (pib1>pib2) {
    cartavencedora = carta1;
    pibvencedor =pib1;
    pibperdedor = pib2;
    } else {
        cartavencedora = carta2;
        pibvencedor = pib2;
        pibperdedor = pib1;
    }

    // Exibição dos Resultados:
printf ("A carta vencedora e: %d\n", cartavencedora);
printf (" A carta venceu pelo seu pib de %f\n", pibvencedor);
printf (" A carta perdedora tem o pib de %f\n", pibperdedor);

    return 0;
}
