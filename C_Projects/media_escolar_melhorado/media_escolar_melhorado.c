#include <stdio.h>

int main() {

    float nota_1;
    float nota_2;
    float nota_3;
    float media;


    printf("Informe a primeira nota: ");
    scanf("%f", &nota_1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota_2);

    printf("Informe a terceira nota: ");
    scanf("%f", &nota_3);

    media = (nota_1 + nota_2 + nota_3) / 3;

    if(media >= 6) {
        printf("Parabéns foi aprovado com nota %.1f.\n", media);
    }else if(media >= 3 && media < 6) {
        printf("Infelizmente, você foi reprovado, com nota %.1f. \n", media);
        printf("Você poderá refazer a prova.");
    }else if(media < 3) {
        printf("Você não se qualifica para refazer a prova.");
    }else{
        printf("Nota inválida, tente novamente.");
    }
}