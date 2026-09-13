#include <stdio.h>

int main (){
    int i, j;
    int index;
    int agua = 0;
    int navio[3][3];
    int tabuleiro[10][10] = {
        {agua, agua, agua, agua, agua, agua, agua, agua, agua, agua},
        {agua, agua, agua, agua, agua, agua, agua, agua, agua, agua},
        {agua, agua, agua, agua, agua, agua, agua, agua, agua, agua},
        {agua, agua, agua, agua, agua, agua, agua, agua, agua, agua},
        {agua, agua, agua, agua, agua, agua, agua, agua, agua, agua},
        {agua, agua, agua, agua, agua, agua, agua, agua, agua, agua},
        {agua, agua, agua, agua, agua, agua, agua, agua, agua, agua},
        {agua, agua, agua, agua, agua, agua, agua, agua, agua, agua},
        {agua, agua, agua, agua, agua, agua, agua, agua, agua, agua},
        {agua, agua, agua, agua, agua, agua, agua, agua, agua, agua}
    
    };
    printf("***Jogo de Batalha Naval em C***\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Regras\n");
    printf("3. Creditos\n");
    printf("4. Sair\n");
    scanf("%d", &index);

    switch (index)
    {
    case 1:

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("Tabuleiro: %d\t", tabuleiro[10][10]);
        }
        printf("\t");
    } printf("Digite em quais coordenadas voce deseja botar o navio vertical:\n");
    scanf("%d\n", &index);
    printf("O navio foi posicionado em (%s,%s)\n", tabuleiro[0], tabuleiro[1]);
        break;
    
    default:
    printf("Opcao Invalida\n");
        break;
    }
}