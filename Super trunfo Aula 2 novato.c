#include <stdio.h>

int main(){

    // Variaveis para cartas //
    char carta1[25], carta2[25];
    char estado1, estado2;
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;

    // Instruções utilizando as funções printf e scanf //
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

    //Exibindo todas a informações Carta //
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %c0%s\n", estado1, carta1);
    printf("Nome da cidade: %s\n", nome1);
    printf("Populacao da cidade: %d\n", populacao1);
    printf("Area da cidade: %3.f\n", area1);
    printf("PIB da cidade: %3.f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", turisticos1);

    //Exibindo todas a informações Carta 1 //

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %c0%s\n", estado2, carta2);
    printf("Nome da cidade: %s\n", nome2);
    printf("Populacao da cidade: %d\n", populacao2);
    printf("Area da cidade: %3.f\n", area2);
    printf("PIB da cidade: %3.f\n", pib2);
    printf("Numero de pontos turisticos: %d\n\n\n", turisticos2);

    // Variaveis para calculo da densidade e pib per capita //
    float densidade1;
    float densidade2;   
    float pibper1;    
    float pibper2;

    // Calculo densidade e pib per capita //
    densidade1 = populacao1 / area1;
    pibper1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibper2 = pib2 / populacao2;

    // exibindo resultado do calculo //
    printf("Calculo da Densidade carta 1 é:  %.3f\n", densidade1);
    printf("Calculo do Pib per capita da carta 1 é:  %.3f\n", pibper2);
    printf("Calculo da Densidade carta 2 é:  %.3f\n", densidade2);
    printf("Calculo do Pib per capita da carta 2 é:  %.3f \n", pibper2);
    
    if(populacao1 < populacao2){
        printf("Carta 1 (%c) - População Resultado: (%d) venceu\n", estado1, populacao1);
    }else {
        printf("Carta 2 (%c) - População Resultado: (%d) venceu\n", estado2, populacao2);
    }

}
