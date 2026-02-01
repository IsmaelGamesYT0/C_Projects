#include <stdio.h>

int main(void) {
    
    // Declaração das variáveis.

    char linha[80] = "+----------------------------------------------------------------------+";
    char nome[20];
    char mes[10];
    char resposta [1];
    int dia, ano;

//+------------------------------------------------------------------------------------------------------+//
    // Área de interação com o usuário.


    printf("Olá, Seja bem-vindo ao meu programa em C.\n");
    printf("%s\n", linha);

    printf("Primeira, informe o apenas o nome sem sobrenome: \n");
    scanf("%s", nome);
    printf("%s\n", linha);

    printf("Por favor, informe o seu dia de nascimento: \n");
    scanf("%d", &dia);
    printf("%s\n", linha);

    printf("Agora, informe o seu mês de nascimento: Exemplo: Dezembro\n");
    scanf(" %s", &mes);
    printf("%s\n", linha);

    printf("Por fim, informe o seu ano de nascimento: ");
    scanf("%d", &ano);
    printf("%s\n", linha);


//+------------------------------------------------------------------------------------------------------+//
    // Área de saída de dados.

    printf("Agora para finalizar, cheque as suas informações abaixo: \n");
    printf("%s\n", linha);

    printf("Seu nome é: %s\n", nome);
    printf("%s\n", linha);

    printf("Sua data de nascimento é: %d/%s/%d\n", dia, mes, ano);
    printf("%s\n", linha);

//+------------------------------------------------------------------------------------------------------+//

    // Área de validação dos dados.

    printf("Os dados fornecidos acima estão corretos? Responda com s ou n: ");
    scanf_s("%s", resposta);
    printf("%s\n", linha);

    if (resposta[0] == 's') {
        
        printf("Obrigado por utilizar o meu programa. Até a próxima!");

        
    }else if (resposta[0] == 'n') {
        printf("Por favor, reinicie o programa para corrigir as informações.");
        
        return 0;
    }
}

//+------------------------------------------------------------------------------------------------------+//
