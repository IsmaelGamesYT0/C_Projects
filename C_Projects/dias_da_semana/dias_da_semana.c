#include <stdio.h>

int main() {
    
    int dia;
    
    printf("Insira um número entre 1 e 7 e será mostrado o dia da semana correspondente: ");
    scanf("%d", &dia);

switch (dia) {
    case 1:
        printf("Hoje é domingo.\n");
        break;

    case 2:
        printf("Hoje é segunda-feira.\n");  
        break;

    case 3:
        printf("Hoje é terça-feira.\n");    
        break;

    case 4:
        printf("Hoje é quarta-feira.\n");    
        break;    
    
    case 5:
        printf("Hoje é quinta-feira.\n");    
        break;

    case 6:
        printf("Hoje é sexta-feira.\n");
        break;

    case 7:
        printf("Hoje é sábado.\n");    
        break;
    default:
        printf("Dia inválido!");
        break;  
    }
}