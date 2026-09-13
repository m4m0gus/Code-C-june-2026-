#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int numero1 = 1;
    printf("Antes incremento: %d\n", numero1);

    numero1++;
    printf("Após incremento: %d\n", numero1);

    numero1--;
    printf("Após decremento: %d\n", numero1);

    int resultado;
    printf("Antes incremento: %d\n", numero1);

    resultado = numero1++;
    printf("Apos Pós-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Apos Pré-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

     resultado = numero1--;
    printf("Apos Pós-decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = --numero1;
    printf("Apos Pré-decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);
}