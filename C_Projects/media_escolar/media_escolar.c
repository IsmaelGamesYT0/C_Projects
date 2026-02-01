#include <stdio.h>

int main() {
    float nota_1;
    float nota_2;
    float nota_3;
//+------------------------------------------------------------------------------------------------------+//
    printf("Informe a primeira nota: ");
    scanf("%f", &nota_1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota_2);

    printf("Informe a terceira nota: ");
    scanf("%f", &nota_3);
//+------------------------------------------------------------------------------------------------------+// 
    float media = (nota_1 + nota_2 + nota_3) / 3;

    if (media >= 6) {
        printf("Parabéns você foi aprovado com média de %.1f. \n", media);
    }else if (media < 6) {
        printf("Infelizmente, você foi reprovado com média de %.1f. \n", media);
    }else{
        printf("Inválido, Tente novamente!");
        return 0;
    }
}
//+------------------------------------------------------------------------------------------------------+//