#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    
    printf("Informe seu nome: ");
    fflush(stdout);
    
    if (!fgets(nome, sizeof(nome), stdin)) return 1;
    nome[strcspn(nome, "\r\n")] = 0;

    printf("Olá, %s! Seja bem-vindo ao meu programa em C. \n", nome);
    return 0;

}