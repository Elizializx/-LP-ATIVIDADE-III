#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, j;
    int idade[5];
    char nome[5][200];
    float nota[5][3];
    float soma;
    float media[5];

    printf("À baixo insira os dados dos 5 alunos.");
    printf("\n\n");
    sleep(1);

    for (i = 0; i < 5; i++)
    {
        printf("Insira o %dº nome: ", i + 1);
        gets(nome[i]);

        printf("Insira a %dº idade: ", i + 1);
        scanf("%d", &idade[i]);

        soma = 0; 

        for (j = 0; j < 3; j++)
        {
            do
            {
                printf("Insira sua %dº nota: ", j + 1);
                scanf("%f", &nota[i][j]);

                if (nota[i][j] < 0 || nota[i][j] > 10)
                {
                    printf("Nota inválida!\nInsira novamente.\n");
                }
            } while (nota[i][j] < 0 || nota[i][j] > 10);

            soma += nota[i][j];
        }

        media[i] = soma / 3; 

        system("cls");

        fflush(stdin);
    }

    fflush(stdin);

    system("cls");

    for (i = 0; i < 5; i++)
    {
        printf("\n");
        printf("Dados do %dº aluno: ", i + 1);
        printf("\n\n");
        printf("Nome do Aluno: %s \n", nome[i]);
        printf("Idade: %d \n", idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("%dº Nota: %.1f \n", j + 1, nota[i][j]);
        }

        printf("Média: %.1f \n", media[i]);

        if (media[i] >= 7)
        {
            printf("BOAAA! APROVADOOOOOOO :)!\n");
            printf("\n");
        }
        else if (media[i] >= 5)
        {
            printf("AINDA À TEMPO! RECUPERAÇÃOOOO :/!\n");
            printf("\n");
        }
        else
        {
            printf("NÃO FOI DESSA VEZ! REPROVADOOOO :(!\n");
            printf("\n");
        }
    }

    return 0;
}
