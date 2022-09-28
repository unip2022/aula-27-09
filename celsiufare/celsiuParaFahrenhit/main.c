#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fahrenhit;

    printf("Este programa transforma graus Fahrenhit em graus Celsius."
           "Digite quantos graus (Fahrenhit) você gostaria de converter para Celcius: ");
   scanf("%f", &fahrenhit);

   celsius=(fahrenhit-32)*(5.0/9.0);
   system("cls || clear");
   printf("%f\n", celsius);
   printf("A conversão de %f Fahrenhit para Celsius fica em %f\n\n", fahrenhit, celsius);
    return 0;
}
