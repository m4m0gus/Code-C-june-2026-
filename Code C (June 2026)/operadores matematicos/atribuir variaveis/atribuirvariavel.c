#include <stdio.h>

int main(){
    /*
    Atribuição Simples (=)
    Atribuição com Soma (+=)
    Atribuição com Subtração (-=)
    Atribuição com Multiplicação (*=)
    Atribuição com Divisão (/=)
    */
   int numero1 = 16, numero2, resultado;

   resultado = 29;
   printf("Resultado: %d\n", resultado);

   resultado += 20;
   printf("Resultado: %d\n", resultado);

   resultado -= numero1;
   printf("Resultado: %d\n", resultado);

   resultado *= 7;
   printf("Resultado: %d\n", resultado);

   resultado /= 2;
   printf("Resultado: %d\n", resultado);
}