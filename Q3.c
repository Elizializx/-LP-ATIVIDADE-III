#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int i;
    int numero[250];
    char nome[250][250];
    int opcao;
    int contador = 0;

    do {
        printf("Selecione o número referente à sua escolha.\n");
        printf("\n");
        printf("1 - Adicionar um número \n");
        printf("2 - Exibir números cadastrados\n");
        scanf("%d", &opcao);

        system("cls");

        switch (opcao) {
            case 1:
                fflush(stdin);

                printf("Insira seu nome: ");
                gets(nome[contador]);

                printf("Insira seu número: ");
                scanf("%d", &numero[contador]);
                contador++;

                system("cls");

                break;

            case 2:
                printf("Informação dos números cadastrados: \n");
                printf("\n");
                sleep(1);

                for (i = 0; i < contador; i++) {
                    printf("Nome: %s \n", nome[i]);
                    printf("Número de telefone: %d \n", numero[i]);

                    printf(" \n");
                }
                break;

            default:
                printf("Opção inválida! \n");
                break;
        }
    } while (opcao != 2);

    return 0;
}
