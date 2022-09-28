#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operador;
    float valor1, valor2, resultado;

    printf("Este programa fara uma operação conforme o requisitado\n"
           "Insira +, -, *, /, para a operação desejada: ");
    scanf("%c", &operador);

    printf("Digite o valor 1: ");
    scanf("%f", &valor1);

    printf("Digite o valor 2: ");
    scanf("%f", &valor2);

    if (operador=='+'){
        resultado=valor1+valor2;
    }
    if (operador=='-'){
        resultado=valor1-valor2;
    }
    if (operador=='*'){
        resultado=valor1*valor2;
    }
    if (operador=='/'){
        resultado=valor1/valor2;
    }
    printf("%f", resultado);
    return 0;
}
