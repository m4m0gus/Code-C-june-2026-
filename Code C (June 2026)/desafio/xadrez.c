#include <stdio.h>

int main(){
    int torre, bispo, rainha, opcao, i, s, r = 1, c = 1, d = 1;

    printf("Jogo de xadrez\n");
    printf("Escolha qual peça ira mover\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
            for (i = 1; i <= 10; i++)
        {
            printf("Direita\t", i);
            i++;
        }
        break;

    case 2:
        do
        {
            printf("diagonal\n", s);
        } while (s <= 5);
        
        break;

    case 3:
        while (r <= 5)
        {
            printf("Esquerda\t");
            r++;
        }
        break;

    case 4:
        while (c <= 2)
        {
            printf("Baixo\n");
            c++;
        } while (d <= 1)    
            {
                printf("Direita\t");
                d++;
            }
        break;
    
    default:
        printf("Opcao invalida\n");
        break;
    }
}