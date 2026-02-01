#include <stdio.h>

int main() {
    char linha[80] = "+----------------------------------------------------------------------+";
    char nome[50];
    int idade;
//+------------------------------------------------------------------------------------------------------+//
    printf("Olá!, Seja bem-vindo ao sistema de controle de acesso.\n");
    printf("%s\n", linha);

    printf("Por favor, informe apenas seu primeiro nome: ");
    scanf("%49s", nome);
    printf("%s\n", linha);

    printf("Agora, informe a sua idade: ");
    scanf("%d", &idade);
    printf("%s\n", linha);
//+------------------------------------------------------------------------------------------------------+//
    if (idade >= 18) {
        printf("Acesso liberado!\n");
        printf("%s\n", linha);

    } else {
        printf("Acesso negado! Você não possui a idade mínima necessária.\n");
        printf("%s\n", linha);

        return 0;
    }
//+------------------------------------------------------------------------------------------------------+//
    printf("Seja bem-vindo, %s! Você tem %d anos.\n", nome, idade);
    printf("%s\n", linha);

    printf("Obrigado por utilizar o meu controller de acesso!\n");
    printf("%s\n", linha);

    printf("© 2026 Copyright. Made by Ismael.\n");
    printf("%s\n", linha);
}
//+------------------------------------------------------------------------------------------------------+//