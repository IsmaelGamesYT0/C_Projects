#include <stdio.h>

//+------------------------------------------------------------------------------------------------------+//

// Declaração do separador de linhas.

char linha[80] = "+----------------------------------------------------------------------+";

//+------------------------------------------------------------------------------------------------------+//

// Função para entrada de dados.

void input(int *numero1, int *numero2)
{
    printf("Por favor, insira o primeiro número inteiro: ");
    scanf("%d", numero1);
    printf("%s\n", linha);

    printf("Por fim, insira o segundo número inteiro: ");
    scanf("%d", numero2);
    printf("%s\n", linha);
}
//+------------------------------------------------------------------------------------------------------+//

// Função para somar dois números inteiros.

int numeros(int numero1, int numero2)
{
    int soma;
    soma = numero1 + numero2;
    return soma;
}
//+------------------------------------------------------------------------------------------------------+//

// Função para a saída de dados.

void output(int resultado)
{
    printf("O resultado da soma é: %d\n", resultado);
    printf("%s\n", linha);

    printf("Obrigado por utilizar o meu programa.");
}
//+------------------------------------------------------------------------------------------------------+//

// Função principal do método main().

int main()
{

    int numero1, numero2, resultado;

    input(&numero1, &numero2);
    resultado = numeros(numero1, numero2);
    output(resultado);
    return 0;
}
//+------------------------------------------------------------------------------------------------------+//