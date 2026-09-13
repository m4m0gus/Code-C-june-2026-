#include <stdio.h>

int main(){
     int opcao;
     int carta1 = 1, carta2 = 2;
     char estado[20];
     char codigo[10];
     char cidade1[30], cidade2[20];
     int populacao1, populacao2;
     float area1, area2;
     float pib1, pib2;
     int turistico1, turistico2;
     float superpoder1, superpoder2;

    printf("***Jogo de Super Trunfo em C***\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Regras\n");
    printf("3. Creditos\n");
    printf("4. Sair\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    printf("criando a %d carta:\n", carta1);

    printf("estado: ");
    scanf("%s", &estado);

    printf("codigo da carta: ");
    scanf("%s", &codigo);

    printf("cidade: ");
    scanf("%s", &cidade1);

    printf("população: ");
    scanf("%d", &populacao1);

    printf("area: ");
    scanf("%f", &area1);

    printf("pib: ");
    scanf("%f", &pib1);

    printf("numero de pontos turisticos: ");
    scanf("%d", &turistico1);

    float densidade1 = (float) (populacao1 / area1);
    float capita1 = (float) (pib1 / populacao1);
    superpoder1 = populacao1 + area1 + pib1 + turistico1 + capita1 / densidade1;

    printf("%d Carta:\n", carta1);

    printf("Carta: %d\n", carta1);
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %f km\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turisticos: %d\n", turistico1);
    printf("Densidade Populacional: %f\n", densidade1);
    printf("Pib per Capita: %f\n", capita1);
    printf("Super Poder: %f\n", superpoder1);

    printf("criando a %d carta:\n", carta2);

    printf("estado: ");
    scanf("%s", &estado);

    printf("codigo da carta: ");
    scanf("%s", &codigo);

    printf("cidade: ");
    scanf("%s", &cidade2);

    printf("população: ");
    scanf("%d", &populacao2);

    printf("area: ");
    scanf("%f", &area2);

    printf("pib: ");
    scanf("%f", &pib2);

    printf("numero de pontos turisticos: ");
    scanf("%d", &turistico2);

    float densidade2 = (float) (populacao2 / area2);
    float capita2 = (float) (pib2 / populacao2);
    superpoder2 = populacao2 + area2 + pib2 + turistico2 + capita2 / densidade2;

    printf("%d Carta:\n", carta2);

    printf("Carta: %d\n", carta2);
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %f km\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turisticos: %d\n", turistico2);
    printf("Densidade Populacional: %f\n", densidade2);
    printf("Pib per Capita: %f\n", capita2);
    printf("Super Poder: %f\n", superpoder2);

    printf("População: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Densidade: %d\n", densidade1 < densidade2);
    printf("Capita: %d\n", capita1 > capita2);
    printf("Super Poder: %d\n", superpoder1 > superpoder2);

    if (populacao1 > populacao2) {
        printf("Carta 1 (%s) Venceu!\n", cidade1);
    } else if (populacao1 == populacao2){
        printf("Empate");
    } else {
        printf("Carta 2 (%s) Venceu!\n", cidade2);
    }
        break;

    case 2:
        printf("* O Super Trunfo é um jogo de cartas clássico onde o objetivo é conquistar todas as cartas do baralho comparando os atributos dos personagens ou veículos. A cada rodada, os jogadores leem um atributo de sua carta, e quem tiver o maior valor recolhe as cartas dos adversários\n");
        printf("* O tema desse jogo de super trunfo é: Países\n");
        break;

    case 3:
        printf("Jogo e Codigo Feito por M4RC0S");
        break;

    case 4:
        printf("Obrigado por jogar");
        break;
    
    default:
    printf("Opcao invalida\n");
        break;
    }

    return 0;
}