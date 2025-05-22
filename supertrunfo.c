#include <stdio.h>

int main(){

    char carta1[25], carta2[25];
    char estado1, estado2;
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;

    printf("Carta 1: \n");
    printf("Nome do estado de A a H: \n");
    scanf(" %c", &estado1);

    printf("Codigo da carta de 01 a 04: \n");
    scanf(" %s", &carta1);

    printf("Nome da cidade: \n");
    scanf(" %s", &nome1);
    
    printf("População da cidade: \n");
    scanf(" %d", &populacao1);

    printf("Area da cidade(Em Km²): \n");
    scanf(" %f", &area1);

    printf("PIB da cidade: \n");
    scanf(" %f", &pib1);

    printf("Numero de pontos turisticos: \n");
    scanf(" %d", &turisticos1);

    printf("\nCarta 2: \n");
    printf("Nome do estado de A a H: \n");
    scanf(" %c", &estado2);

    printf("Codigo da carta de 01 a 04: \n");
    scanf(" %s", &carta2);

    printf("Nome da cidade: \n");
    scanf(" %s", &nome2);
    
    printf("População da cidade: \n");
    scanf(" %d", &populacao2);

    printf("Area da cidade(Em Km²): \n");
    scanf(" %f", &area2);

    printf("PIB da cidade: \n");
    scanf(" %f", &pib2);

    printf("Numero de pontos turisticos: \n");
    scanf(" %d", &turisticos2);


    
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %c0%s\n", estado1, carta1);
    printf("Nome da cidade: %s\n", nome1);
    printf("Populacao da cidade: %d\n", populacao1);
    printf("Area da cidade: %f\n", area1);
    printf("PIB da cidade: %f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", turisticos1);


    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %c0%s\n", estado2, carta2);
    printf("Nome da cidade: %s\n", nome2);
    printf("Populacao da cidade: %d\n", populacao2);
    printf("Area da cidade: %f\n", area2);
    printf("PIB da cidade: %f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", turisticos2);

    





}