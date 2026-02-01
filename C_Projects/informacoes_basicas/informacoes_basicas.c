#include <stdio.h>

int main() {
    char nome [30];
    int idade;
    float peso;
//+------------------------------------------------------------------------------------------------------+//
    printf("Por favor, informe apenas o seu primeiro nome: ");
    scanf("%29s", nome);

    printf("Agora informe a sua idade: ");
    scanf("%d", &idade);

    printf("Por fim, informe o seu peso em Quilogramas. Exemplo: 65.7 \n");
    scanf("%f", &peso);
//+------------------------------------------------------------------------------------------------------+//

    printf("Seu nome é %s, você tem %d anos e pesa %.2f  Kg.", nome, idade, peso);

    return 0;
}
//+------------------------------------------------------------------------------------------------------+//