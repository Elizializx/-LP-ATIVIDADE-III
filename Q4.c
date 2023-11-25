#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int i;
    int valor[5];
    int funcoes;
    int impar = 0;
    int par = 0; 
    int negativo = 0;
    int maior = 0;
    int menor = 0; 
    int totalvalor = 0;
    float mediatotal = 0;
    float totalpar = 0; 
    float mediapar = 0;

    printf("Logo abaixo você irá inserir 5 valores para utilizar nossas 5 funções.\n");
    printf("\nGostaria de analisar as nossas 5 funções?\n");
    printf("1- Sim\n");
    printf("2- Não");
    scanf("%d", &funcoes);

    system("cls");

    switch (funcoes) {
    case 1:
        printf("Funções: \n");
        printf("1. A quantidade de números ímpares;\n");
        printf("2. A quantidade de números negativos;\n");
        printf("3. O maior e o menor número;\n");
        printf("4. A média dos números pares;\n");
        printf("5. A média de todos os números inseridos;\n");
        printf("\n");
        sleep(1);
        printf("Agora insira 5 valores, para prosseguir com o programa.\n");

        for (i = 0; i < 5; i++) 
        {
            printf("Insira: ");
            scanf("%d", &valor[i]);

            system("cls");

            totalvalor += valor[i];

            if (valor[i] % 2 == 0)
            {
                par++;
                totalpar += valor[i];
            } 
            else 
            {
                impar++;
            }

            if (valor[i] < 0) {
                negativo++;
            }

            if (valor[i] > maior) 
            {
                maior = valor[i];
            }

            if (valor[i] < menor || i == 0) 
            {
                menor = valor[i];
            }
        }
        break;

    case 2:
        return 0;
        break;
    }

    if (par > 0)
    {
        mediapar = totalpar / par;
    }

    mediatotal = totalvalor / 5;

    system("Cls");

    printf("1. Quantidade de ímpares: %d \n", impar);
    printf("2. Quantidade de negativos: %d \n", negativo);
    printf("3. O maior número: %d\n", maior);
    printf("   O menor número: %d\n", menor);
    printf("\n");
    printf("4. Média dos números pares: %.1f\n", mediapar);
    printf("5. Média de todos os números inseridos: %.1f\n", mediatotal);

    return 0;
}
