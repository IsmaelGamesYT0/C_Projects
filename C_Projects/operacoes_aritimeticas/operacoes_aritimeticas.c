#include <stdio.h>

int main() {
    int A, B, soma, subtracao, multiplicacao, divisao_inteira;
    float divisao_real;
//+------------------------------------------------------------------------------------------------------+//
    printf("Digite o primeiro número: ");
    scanf("%d", &A);
    
    printf("Digite o segundo número: ");
    scanf("%d", &B);
//+------------------------------------------------------------------------------------------------------+//
    soma = A + B;
    subtracao = A - B;
    multiplicacao = A * B;
    divisao_inteira = A / B;
    divisao_real = (float) A / B;
//+------------------------------------------------------------------------------------------------------+//
    printf("A soma entre %d e %d é %d.\n", A, B, soma);
    
    printf("A subtração entre %d e %d é %d.\n", A, B, subtracao);
    
    printf("A multiplicação entre %d e %d é %d.\n", A, B, multiplicacao);
    
    printf("A divisão inteira entre %d e %d é %d.\n", A, B, divisao_inteira);

    printf("A divisão real entre %d e %d é %.3f.\n", A, B, divisao_real);
}
//+------------------------------------------------------------------------------------------------------+//