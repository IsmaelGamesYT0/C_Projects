#include <stdio.h>
#include <unistd.h>
#include <string.h>

typedef struct {
    int status;
    int running;
    int progress;    
} System;

typedef struct {
    int ok;
    void *data;
    char err[90];
} Result;

Result parseSystemStatus(int status) {
    Result r;
    r.ok = 1;
    
    if (status < 0 || status > 1) {
        r.ok = 0;
        strcpy(r.err, "status must be only 0 or 1"); 
        return r;
    }
    
    if (status == 0) { 
        r.data = "OFF";
    }
    if (status == 1) {
        r.data = "ON";
    }
    
    return r;
}

int main(void)
{
    int menuOption = -1;
    System s;
    s.progress = 0;
    s.running = 1;
    s.status = 0;

    while (s.running)  
    {
        printf("\n=== Sistema ===\n");
        printf("Lembre-se de primeiro iniciar o sistema!\n");
        printf("1 - Iniciar sistema\n");
        printf("2 - Ver status\n");
        printf("3 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &menuOption);  
        printf("\n");

        if (menuOption == 1) {
            if (s.status == 1) {
                printf("Sistema já foi inicializado.\n");
                continue;  
            }
            printf("Sistema está sendo inicializado...\n");
            sleep(1);
            printf("\n");

            s.progress = 0;  
            while (s.progress <= 100)
            {
                printf("Progresso: %d%%\n", s.progress);
                s.progress += 1;
                usleep(50000);  
            }
            
            s.status = 1;
            printf("\nSistema inicializado com sucesso!\n");
        }
        else if (menuOption == 2)
        {
            Result status = parseSystemStatus(s.status);  
            if (!status.ok) {
                printf("Erro ao mostrar status: %s\n", status.err);  
                continue;  
            }
            printf("Status: %s\n", (char*)status.data);  
        }
        else if (menuOption == 3)  
        {
            printf("Saindo...\n");
            sleep(1);
            s.running = 0;
        }
        else
        {
            printf("Opção inválida, tente novamente!\n");
        }
    }
    
    return 0;  
}