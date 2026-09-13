#include <stdio.h>
   int main(){

//conversão implicita
   int a = 10;
   float b = 3.5;
   float resultado = a + b;
   printf("Resultado: %.2f\n", resultado);

//conversao explicita
   /*
   int a = 10;
   int b = 3;
   float quociente = (float) a / b;
   printf("Quociente: %.2f\n", quociente);
   */
   return 0;
}