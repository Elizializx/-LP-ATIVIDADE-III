#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define MAX_VENDAS 100

int main() {
    setlocale(LC_ALL, "portuguese");

    int opcao1, opcao2;
    int valorVendas = 0;
    float totalVendas = 0;
    char nomesProdutos[MAX_VENDAS][50];
    float precos[MAX_VENDAS];
    int quantidades[MAX_VENDAS];

    do {
        printf("Bem-Vindo!\n");
        printf("\n");
        sleep(1);
        printf("Gostaria de prosseguir com o programa e ver o menu?\n");
        printf("1 - Sim\n");
        printf("2 - N�o\n");
        scanf("%d", &opcao1);

        system("cls");

        switch (opcao1) {
            case 1:
                printf("�tima escolha! :)\n");
                printf("\n");
                sleep(1);
                printf("\n----------------MENU-----------------\n");
                printf("Insira o n�mero referente a sua escolha.\n");
                printf("\n");
                printf("1 - Adicionar venda\n");
                printf("2 - Sair e exibir total de vendas\n");
                scanf("%d", &opcao2);

                system("cls");

                switch (opcao2) {
                    case 1:
                        if (valorVendas < MAX_VENDAS) {
                            printf("\nInsira as informa��es da venda:\n");
                            printf("\n");
                            printf("Nome do produto: ");
                            scanf("%s", nomesProdutos[valorVendas]);
                            printf("Pre�o do produto: ");
                            scanf("%f", &precos[valorVendas]);
                            printf("Quantidade vendida: ");
                            scanf("%d", &quantidades[valorVendas]);

                            totalVendas += precos[valorVendas] * quantidades[valorVendas];
                            valorVendas++;

                            printf("\nVenda registrada com sucesso!\n");

                            system("cls");
                        } 
                        else
                        {
                            printf("\nLimite m�ximo de vendas atingido.\n");
                        }
                        break;

                    case 2:
                        printf("\nTotal de vendas realizadas: R$%.2f\n", totalVendas);
                        break;

                    default:
                        printf("\nOp��o inv�lida!\nInsira novamente.\n");
                }
                break;

            case 2:
                printf("� uma pena, mas obrigado pela prefer�ncia :(!\n");
                return 0;
                break;

            default:
                printf("\nOp��o inv�lida!\nInsira novamente.\n");
        }
    }
     while (opcao2 != 2);

    return 0;
}
