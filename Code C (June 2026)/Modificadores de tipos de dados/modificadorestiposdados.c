#include <stdio.h>

int main(){

    printf("Teste de Unsigned int\n");
    int numeroSinal = 3000000000; 
    unsigned int numeroSemSinal = 3000000000; 

    printf("Numero com sinal: %d\n", numeroSinal);
    printf("Numero sem sinal: %u\n", numeroSemSinal);

    printf("Teste de Long int\n");

    int numeroNormal = 2147483647;
    long int numeroGrande = 2147483647;

    printf("Numero regular (int): %d\n", numeroNormal);
    printf("Numero grande (long int): %ld\n", numeroGrande);

    numeroGrande = 2147483648;

    printf("Numero grande atualizado (long int): %ld\n", numeroGrande);

    printf("Teste de Short int\n");
    short int numeroPequeno = 32768;
    printf("numero pequeno (short int): %d\n", numeroPequeno);

    numeroPequeno = 32769;
    printf("numero pequeno atualizado (short int): %d\n", numeroPequeno);

    return 0;
}