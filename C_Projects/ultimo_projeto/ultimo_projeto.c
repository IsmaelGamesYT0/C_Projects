#include <stdio.h>
#include <unistd.h>

int sistema_status;

int mostrar_status()
{
    if (sistema_status = 0)
    {
        printf("Desligado.");
    }
    else if (sistema_status == 1)
    {
        printf("Ligado.");
    }
}

int main(void)
{

    int rodando = 1;
    int opcao = -1;
    int progresso;

    while (rodando)
    {
        printf("\n=== Sistema ===\n");
        printf("Lembre-se de primeiro iniciar o sistema!\n");
        printf("1 - Iniciar sistema\n");
        printf("2 - Ver status\n");
        printf("3 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        printf("\n");

        if (opcao == 1)
        {

            if (sistema_status == 1)
            {
                return mostrar_status();
                continue;
            }
            printf("Sistema está sendo inicializado...\n");
            sleep(1);
            printf("\n");
            progresso = 0;
            mostrar_status();

            while (progresso <= 100)
            {
                printf("Progresso: %d%%\n", progresso);
                progresso += 1;
                usleep(0);
            }
        }
        else if (opcao == 2)
        {
            printf("Status: %d\n", mostrar_status());
        }
        else if (opcao == 3)
        {
            printf("Saindo...\n");
            sleep(1);
            rodando = 0;
        }
        else
        {
            printf("Inválido, tente novamente!");
        }
    }
}
