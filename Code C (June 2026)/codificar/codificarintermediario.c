#include <stdio.h>

int main(){
   int nota1, nota2, nota3;
   float media;

   printf("***Programa de Calculo de Media***\n");

   printf("digite a sua primeira nota\n");
   scanf("%d", &nota1);

   printf("digite a sua segunda nota\n");
   scanf("%d", &nota2);

   printf("digite a sua terceira nota\n");
   scanf("%d", &nota3);

   media = (nota1 + nota2 + nota3) / 3;

   printf("a media é: %f", media);

    return 0;
}